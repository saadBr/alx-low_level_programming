#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int c = 0, i;

	while (str[c] != '\0')
		c++;
	if (c % 2 == 0)
		i = c / 2;
	else
		i = (c + 1) / 2;
	for (; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');

}
