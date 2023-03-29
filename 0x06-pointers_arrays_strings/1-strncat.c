#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  * @n : size of src to dest
  *
  * Return: A pointer to the resulting string dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int src_len = 0, dest_len = 0, new_len = 0, i = 0;

	while (*(src + src_len) != '\0')
		src_len++;
	while (*(dest + dest_len) != '\0')
		dest_len++;
	new_len = dest_len;
	while (new_len < src_len + dest_len && i < n)
	{
		*(dest + new_len) = *(src + i);
		new_len++;
		i++;
	}

	return (dest);
}
