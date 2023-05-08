#include "main.h"

/**
 * main - displays the information contained in the ELF header.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int file, i, c, version;
	ssize_t read_file;
	Elf64_Ehdr head;

	if (argc != 2)
		print_error(0, argv[0]);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		print_error(1, argv[1]);
	read_file = read(file, &head, sizeof(head));
	if (read_file == -1)
	{
		c = close(file);
		if (c == -1)
			print_error(3, argv[1]);
		print_error(2, argv[1]);
	}
	checkfile(head.e_ident, file, argv[1]);
	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf(" %02x", head.e_ident[i]);
	printf("\n  Class:                             %s\n",
			(head.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              2's complement, %s endian\n",
			head.e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
	version = head.e_ident[EI_VERSION];
	printf("  Version:                           %d%s\n",
			version, version == EV_CURRENT ? " (current)" : "");
	printf("  OS/ABI:                            %s\n",
			os_abi(head.e_ident[EI_OSABI]));
	printf("  ABI Version:                       %d\n",
			head.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", object_type(head.e_type));
	printf("  Entry point address:               %#lx\n",
			get_entry_point(head.e_entry, head.e_ident[EI_DATA]) & 0xFFFFFFF);
	c = close(file);
	if (c < 0)
		print_error(3, argv[1]);
	return (0);
}

/**
 * print_error - print error to stderr
 * @num: error num.
 * @file: error type.
 *
 * Return: always 0
 */

int print_error(int num, char *file)
{
	switch (n)
	{
		case 0:
			dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", file);
			exit(98);
			break;
		case 1:
			dprintf(STDERR_FILENO, "Can't open file: %s\n", file);
			exit(98);
			break;
		case 2:
			dprintf(STDERR_FILENO, "Can't read file: %s\n", file);
			exit(98);
			break;
		case 3:
			dprintf(STDERR_FILENO, "Can't close file: %s\n", file);
			exit(98);
			break;
		default:
			dprintf(STDERR_FILENO, "Unvalid file format: %s\n", file);
			exit(98);
			break;
	}
	return (0);
}

/**
 * checkfile - check the type of file if it s elf.
 *
 * @m: magic number of the file.
 * @f: file descriptor.
 * @filename: name of file.
 *
 * Return: 0
 */
int checkfile(unsigned char *m, int f, char *filename)
{
	int c;

	if (!(m[0] == 0x7f && m[1] == 'E' && m[2] == 'L' && m[3] == 'F'))
	{
		c = close(f);
		if (c < 0)
			print_error(3, filename);
		print_error(4, filename);
	}
	return (0);
}

/**
 * os_abi - return one of The eighth byte
 * identifies the operating system and ABI to which  the  object  is targeted.
 *
 * @oa: EI_OSABI value to check.
 *
 * Return:
 *	- OS and ABI
 */

char *os_abi(int oa)
{
	switch (oa)
	{
		case ELFOSABI_NONE || ELFOSABI_SYSV:
			return ("UNIX - System V");
		case ELFOSABI_HPUX:
			return ("UNIX - HP-UX");
		case ELFOSABI_NETBSD:
			return ("UNIX - NetBSD");
		case ELFOSABI_LINUX:
			return ("UNIX - Linux");
		case ELFOSABI_SOLARIS:
			return ("UNIX - Solaris");
		case ELFOSABI_IRIX:
			return ("UNIX - IRIX");
		case ELFOSABI_FREEBSD:
			return ("UNIX - FreeBSD");
		case ELFOSABI_TRU64:
			return ("UNIX - TRU64");
		case ELFOSABI_ARM:
			return ("UNIX - ARM");
		case ELFOSABI_STANDALONE:
			return ("UNIX - Stand-alone (embedded)");
		default:
			return ("<unknown: 53>");
	}
}

/**
 * object_type - return the object file type
 *
 * @o: object type id.
 *
 * Return: object file type
 */
char *object_type(int o)
{
	switch (o)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_DYN:
			return ("DYN (Shared object file)");
		case ET_CORE:
			return ("core file");
		default:
			return ("EXEC (Executable file)");
	}
}

/**
 * get_entry_point - right value of the entry point value for big/little endian
 *
 * @ep: Entry point value.
 * @data: Data type.
 *
 * Return: value of Entry point.
 */

unsigned long int get_entry_point(unsigned long int ep, int data)
{
	if (data != ELFDATA2LSB)
		ep = (ep >> 24) | ((ep >> 8) & 0xFF00) |
			((ep << 8) & 0xFF0000) | (ep << 24);
	return (ep);
}

