#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing fibonacci of even number'
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, fibonacci = 2;
	int i;

	for (i = 1; sum <= 4000000; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
			fibonacci = fibonacci + sum;
	}
	printf("%ld\n", fibonacci);
	return (0);
}
