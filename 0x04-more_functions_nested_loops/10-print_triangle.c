#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @n : the length of squares
 * Return: 0
 */

void print_triangle(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
			_putchar(' ');
		for (j = i; j >= 0 ; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
