#include "main.h"
#include <stdio.h>
/**
 * _strstr - find the first occurances string
 * @haystack: string where the search is made
 * @needle: string whose occurnce si searched in haystack
 * Return: return a pointer to nul
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		while (*(haystack + i) == *(needle + i))
		{
			if (*(needle + (i + 1)) == '\0')
				return (haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}
