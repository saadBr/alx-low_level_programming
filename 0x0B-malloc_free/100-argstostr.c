#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate arg
 * @ac: number of arg
 * @av: args
 *
 * Return: pointer to concatenate string or NULL
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = k = 0; k < size; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			str[k] = '\n';
			j = 0;
			i++;
			k++;
		}

		if (k < size - 1)
		{
			str[k] = av[i][j];
		}
	}
	str[k] = '\0';
	return (str);
}
