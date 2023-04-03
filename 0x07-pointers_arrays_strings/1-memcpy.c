#include "main.h"

/**
 * _memcpy - copy the values from src to dest
 * @dest: copy the values in src to dest
 * @src: the files here can be copied
 * @n: this represents the size of the buffer to be copied
 * Return: return the value to the print out
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
