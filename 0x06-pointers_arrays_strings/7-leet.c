#include "main.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{
	char alpha[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (j < 10)
		{
			if (s[i] == alpha[j])
			{
				s[i] = num[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
