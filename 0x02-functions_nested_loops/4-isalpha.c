#include "main.h"

/**
 * _isalpha - check if a charachter is alpha
 * @c: character to check
 * Return: 1 if c is alpha , 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
