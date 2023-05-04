#include "main.h"

/**
 * flip_bits - flip two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y = n ^ m;
	int x = 0;

	for (; y; y >>= 1)
	{
		if (y & 1)
			x++;
	}
	return (x);
}
