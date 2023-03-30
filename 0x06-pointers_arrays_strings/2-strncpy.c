#include "main.h"

/**
  * _strncpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  * @n : number of character to be copied
  *
  * Return: the pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
		j++;
	while (i < n && src[i])
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
