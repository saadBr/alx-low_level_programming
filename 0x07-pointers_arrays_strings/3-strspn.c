#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: scan the strings
 * @accept: find the match string to s
 * Return: return the result
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, k = 0;

	while (*(s + j) != '\0')
	{
		while (*(accept + k) != '\0')
		{
			if (*(s + j) == *(accept + k))
			{
				i = 0;
				break;
			}
			else
			{
				i = 1;
				k++;
			}
		}
		if (i == 0)
	{
			j++;
			k = 0;
		}
		else
			break;
	}
	if (i == 0)
		return (0);
	else
		return (j);
}
