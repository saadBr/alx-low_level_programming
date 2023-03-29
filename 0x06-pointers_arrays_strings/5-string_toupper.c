#include "main.h"

/**
  * string_toupper - Changes all lowercase letters to uppercase
  * @p: The string will be modified
  *
  * Return: char var
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
			*(p + i) -= 32;
		i++;
	}

	return (p);
}
