#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: nulber to print its binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int x = n, i = 1;
	int len = 0;

	while (x > 0)
	{
		len++;
		x >>= 1;
	}

	len--;

	if (len > 0)
		i = i << len;

	while (i > 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}

}
