#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	int d = 2;
	long int n = 612852475143;

	while (sqrt(n) > d)
	{
		if (n % d == 0)
		{
			n = n / d;
			d = 2;
		}
		else
			d++;
	}
	printf("%ld\n", n);
	return (0);
}

