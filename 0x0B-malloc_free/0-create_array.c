#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array and initilize it with a char
 * @size:  size of array
 * @c: char to initialize the array
 *
 * Return: NULL or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
