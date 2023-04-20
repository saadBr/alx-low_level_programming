#include "variadic_functions.h"

/**
 * sum_them_all - this function sum all its parametres.
 * @n: number of parameters
 *
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list params;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(params, n);
	while (i < n)
	{
		sum += va_arg(params, int);
		i++;
	}
	va_end(params);

	return (sum);
}
