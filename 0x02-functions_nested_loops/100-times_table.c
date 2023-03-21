#include "main.h"

/**
 * print_times_table - printing the n times table
 *@n:the number we print its time tables
 */

void print_times_table(int n)
{
	int i, j;

	if ((n >= 0) && (n < 15))
	{
		for (i = 0 ; i <= n ; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
					_putchar('0');
				else if ((i * j) <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (i * j));
				}

				else if ((i * j) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + ((i * j) / 10));
					_putchar('0' + ((i * j) % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + ((i * j) / 100));
					_putchar('0' + (((i * j) % 100) / 10));
					_putchar('0' + (((i * j) % 100) % 10));
				}
			}
			_putchar('\n');
		}
	}
}
