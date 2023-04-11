#include "main.h"
#include <stdlib.h>

/**
 *_strdup - return a pointer to duplicate string
 *@str: string to be duplicated
 *
 *Return: pointer to the newly located string or NULL
 */

char *_strdup(char *str)
{
	int i = 0, len;
	char *newstr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}

	return (newstr);
	free(newstr);
}
