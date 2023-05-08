#include "main.h"
#include <string.h>
/**
 * append_text_to_file - append text to a file
 * @filename: file name
 * @text_content: string to write to the file
 *
 * Return: 1 on succes or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t  write_file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (!text_content)
	{
		close(file);
		return (1);
	}
	write_file = write(file, text_content, strlen(text_content));
	if (write_file == -1 || write_file != (unsigned int) strlen(text_content))
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
