#include "stldib.h"
#include <sdtlib.h>

/**
 * free_dog - frees dog
 *
 * @d: dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
