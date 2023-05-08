#include "main.h"
void close_file(int file);
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int from, to;
	ssize_t read_file, write_file;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	read_file = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	for (; read_file > 0; read_file = read(from, buff, 1024),
			to = open(argv[2], O_WRONLY | O_APPEND))
	{
		if (from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		write_file = write(to, buff, read_file);
		if (to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
	}
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}

/**
 * close_file - close open file
 * @file: file to close
 *
 * Return: nothing
 */

void close_file(int file)
{
	int c;

	c = close(file);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
