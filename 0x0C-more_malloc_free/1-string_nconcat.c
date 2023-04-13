#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two stirngs
 * @s1: first string
 * @s2: second string
 * @n: n char to concatenate
 *
 * Return: pointer to the new str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;
	}

	if (n > len2)
		n = len2;
	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[len1 + n] = '\0';
	return (str);
}
