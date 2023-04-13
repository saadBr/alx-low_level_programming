#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size to allocate by malloc
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
