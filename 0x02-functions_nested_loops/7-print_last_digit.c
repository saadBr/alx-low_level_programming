#include "main.h"

/**
 * print_last_digit - printing the last digit of a giving number
 * @n: the number to check
 * Return: n if last digit is 0 , otherwise n%10
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar('0' + (n % 10));
	return (n % 10);
}
