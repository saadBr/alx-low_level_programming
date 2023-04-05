#include "main.h"
int is_prime(int n, int i);
/**
 *is_prime_number - check if a number is prime
 *Description: check for prime numbers
 *@n: number we check
 *Return: 1 if is prime 0 if it's not.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 *is_prime - check if a number is prime
 *Description : check for prime numbers
 *@n: number we check
 *@i: div
 *Return: 1 if is prime 0 if it's not.
 */

int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if ((n % i == 0 && n < i) || n < 2)
		return (0);
	return (is_prime(n, i + 1));
}
