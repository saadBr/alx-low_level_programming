#include "main.h"

/**
 * _isupper - check if a charachter is lower
 * @c: character to check
 * Return: 1 if c is lower case , 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
