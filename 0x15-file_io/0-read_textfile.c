#include "main.h"

/**
 * read_textfile - reads a text file & prints it to the POSIX standard output.
 * @filename: the file we read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_file, write_file;
	char *buff;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	read_file = read(file, buff, letters);
	if (read_file == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buff, read_file);
	if (write_file == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	close(file);
	return (read_file);
}
