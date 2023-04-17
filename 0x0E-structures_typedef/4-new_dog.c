#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;
	return (length);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - create a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;
		poppy = malloc(sizeof(dog_t));

		if (poppy == NULL)
			return (NULL);
		poppy->name = malloc(sizeof(char) * name_len);

		if (poppy->name == NULL)
		{
			free(poppy);
			return (NULL);
		}
		poppy->owner = malloc(sizeof(char) * owner_len);

		if (poppy->owner == NULL)
		{
			free(poppy->name);
			free(poppy);
			return (NULL);
		}

		poppy->name = _strcpy(poppy->name, name);
		poppy->age = age;
		poppy->owner = _strcpy(poppy->owner, owner);
	}

	return (poppy);
}
