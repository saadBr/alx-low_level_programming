#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get the value of its index
 * @index: well it's index
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index) & 1);
}
