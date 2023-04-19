#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array we work on
 * @size: number of element in array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of integer or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
