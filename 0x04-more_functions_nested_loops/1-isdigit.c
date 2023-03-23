#include "main.h"

/**
 * _isdigit - check if a charachter is digit
 * @c: character to check
 * Return: 1 if c is digit , 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
