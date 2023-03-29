#include "main.h"

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */

char *_strcat(char *dest, char *src)
{
	int src_len = 0, dest_len = 0, new_len = 0, i = 0;

	while (*(src + src_len) != '\0')
		src_len++;
	while (*(dest + dest_len) != '\0')
		dest_len++;
	new_len = dest_len;
	while (new_len < src_len + dest_len)
	{
		*(dest + new_len) = *(src + i);
		new_len++;
		i++;
	}

	return (dest);
}
