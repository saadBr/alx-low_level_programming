#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked , -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	x <<= index;
	*n = (*n | x);
	return (1);
}
