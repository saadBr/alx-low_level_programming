#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int c = 0, i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i += 2)
		_putchar(s[i]);
	_putchar('\n');
}
