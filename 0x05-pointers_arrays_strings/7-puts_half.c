#include <main.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int c = 0, i;

	while (str[c] != '\0')
		c++;
	i = c / 2;
	for (; i < c; i++)
		_putchar(str[i]);
	_putchar('\n');

}
