#include "main.h"

/**
 * _print_rev_recursion - print a string with reverse
 * @s : string we print its reverse
 * Return ;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
