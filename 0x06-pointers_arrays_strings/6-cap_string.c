#include "main.h"

/**
  * cap_string - ...
  * @s: ...
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int i = 0;

	if (*s >= 'a' && *s <= 'z')
		*s -= 32;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == ' ' || *(s + i) == '\t' || *(s + i) == '.' ||
				*(s + i) == '\n' || *(s + i) == ',' || *(s + i) == ';' ||
				*(s + i) == '!' || *(s + i) == '?' || *(s + i) == '"' ||
				*(s + i) == '(' || *(s + i) == ')' || *(s + i) == '{' ||
				*(s + i) == '}')
		{
			if (*(s + (i + 1)) >= 'a' && *(s + (i + 1)) <= 'z')
				*(s + (i + 1)) -= 32;
		}
		i++;
	}

	return (s);
}
