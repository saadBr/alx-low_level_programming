#include "main.h"

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void print_rev(char *s)
{
	int c = _strlen(s) - 1;

	for (; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
