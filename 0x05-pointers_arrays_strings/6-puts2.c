#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

void puts2(char *s)
{
	int c = 0, i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i += 2)
		_putchar(s[i]);
	_putchar('\n');
}
