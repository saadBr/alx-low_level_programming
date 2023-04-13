#include "main.h"
#include <stdlib.h>

/**
 *array_range - creating an array of integers
 *@min: start value
 *@max: end value
 *
 * Return: pointer to the newly array
 */

int *array_range(int min, int max)
{
	int *arr, i, diff;

	if (min > max)
		return (NULL);
	diff = max - min + 1;
	arr = malloc(sizeof(int) * diff);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < diff ; i++, min++)
		arr[i] = min;
	return (arr);
}
