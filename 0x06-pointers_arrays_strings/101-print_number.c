#include "main.h"

/**
 * print_number - print a number using putchar
 * @n: the number we print
 * Return: 0
 */

void print_number(int n)
{
	unsigned int c = n;

	if (n < 0)
	{
		_putchar('-');
		c = -c;
	}
	if ((c / 10) > 0)
		print_number(c / 10);
	_putchar('0' + (c % 10));
}
