#include "main.h"

/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */

void rev_string(char *s)
{
	int c = 0, start = 0;
	char swap;

	while (s[c] != '\0')
		c++;
	for (c -= 1; c > start; c--, start++)
	{
		swap = s[start];
		s[start] = s[c];
		s[c] = swap;
	}
}
