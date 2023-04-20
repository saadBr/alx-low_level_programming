#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - printing a string
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return : nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *string;

	if (n > 0)
	{

		va_start(params, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(params, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	va_end(params);
	}
	printf("\n");
}
