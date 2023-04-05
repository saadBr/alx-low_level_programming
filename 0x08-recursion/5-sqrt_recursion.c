#include "main.h"

/**
 *_sqrt_recursion - computes the square of number
 *
 * @n: the number
 * Return: natural root of square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 *_sqrt - computes the square of number
 *
 * @n: the number
 * @i: the counter
 * Return: natural root of square
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
