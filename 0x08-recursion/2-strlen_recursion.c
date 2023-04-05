#include "main.h"

/**
 *_strlen_recursion - length of a string
 *Description : function return the length of string
 *@s: string we countits length
 *Return: length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
