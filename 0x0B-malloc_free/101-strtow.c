#include "main.h"
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
 * count - counting the number of word in a string
 * @s: string to count
 *
 * Return: number of words
 */
int count(char *s)
{
	int i, words, space;

	space = 0;
	words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			space = 1;
		else if (space == 1)
		{
			space = 0;
			words++;
		}
	}

	return (words);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	int len, words, i, j = 0, counter, end, start;
	char **arr, *aux;

	len = _strlen(str);
	words = count(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len ; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (counter)
			{
				end = i;
				aux = malloc(sizeof(char) * (counter + 1));
				if (aux == NULL)
					return (NULL);
				while (start < end)
				{
					*aux++ = str[start++];
				}
				*aux = '\0';
				arr[j] = aux - counter;
				j++;
				counter = 0;
			}
		}
		else if (counter++ == 0)
			start = i;
	}
	arr[j] = NULL;
	return (arr);
}
