#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realloc a memory block
 *
 * @ptr: previous allocated memory
 * @old_size: old size allocated
 * @new_size: new size to allocate
 *
 * Return: pointer to the new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *temp_ptr;
	unsigned int i;
	
	temp_ptr = (char *)ptr;
	if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = temp_ptr[i];
		free(ptr);
		return (new_ptr);
	}
	else
	{
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
		new_ptr = malloc(new_size);
		for (i = 0; i < new_size; i++)
			new_ptr[i] = temp_ptr[i];
		free(ptr);
		return (new_ptr);
	}
}
