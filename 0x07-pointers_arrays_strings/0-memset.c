#include "main.h"

/**
 * _memset - fill memory of n with b
 * @s: fill the value of b in it
 * @b: fill the value in pointer s
 * @n: this represents the size of the buffer
 * Return: return s value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
