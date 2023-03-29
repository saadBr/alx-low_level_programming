
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
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
