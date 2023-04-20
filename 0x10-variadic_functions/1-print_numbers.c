#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - printing numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;

	if (n > 0)
	{
		va_start(params, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(params, int));
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(params);
	}
	printf("\n");
}
