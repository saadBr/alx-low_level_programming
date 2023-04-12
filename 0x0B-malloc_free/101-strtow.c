#include <stdlib.h>
#include "main.h"

/**
 * count_word - counting how many words in a string
 * @s: string to count
 *
 * Return: number of words
 */
int count(char *s)
{
	int sp, c, words;

	sp = 0;
	words = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			sp = 0;
		else if (sp == 0)
		{
			sp = 1;
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
	char **arr, *aux;
	int i, j = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				aux = (char *) malloc(sizeof(char) * (c + 1));
				if (aux == NULL)
					return (NULL);
				while (start < end)
					*aux++ = str[start++];
				*aux = '\0';
				arr[j] = aux - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	arr[j] = NULL;

	return (arr);
}

