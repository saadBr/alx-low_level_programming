#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - main function declaration
 * @s: comapre values
 * @accept: print matching values
 * Return: allowed values
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		while (*(accept + i))
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return (NULL);
}
