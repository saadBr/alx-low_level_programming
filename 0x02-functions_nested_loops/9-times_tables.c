#include "main.h"

/**
 * times_table - printing the 9 times table
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0; j < 10; jj++)
		{
			if ((i * j) < 10)
				_putchar('0' + (i * j));
			else
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
			_putchar(',');
			_putchar(' ')
		}
		_putchar('\n');
	}
}
