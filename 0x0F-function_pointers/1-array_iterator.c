#include "function_pointers.h"

/**
 * array_iterator - execute the function in param to array
 * @array: array we work on
 * @size: size of array
 * @action: action we do
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
