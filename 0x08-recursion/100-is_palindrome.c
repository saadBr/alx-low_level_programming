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

/**
 * palindrome - function for is_palindrome
 * @s: String to be checked
 * @i: beginning of string
 * @j: end of string
 * Return: 1 if s is palindrome, 0 if not
 */
int palindrome(char *s, int i, int j)
{
	if (j < i)
		return (1);
	if (*(s + i) != *(s + j))
		return (0);
	return (palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome
 * @s: string to check
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = _strlen_recursion(s) - 1;

	return (palindrome(s, i, j));
}
