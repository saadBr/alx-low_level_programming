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
	long int a = 1, b = 2, sum;
	int i;

	printf("1, 2");
	while (sum < 4000000)
	{
		if ( sum % 2 == 0)
		{
			sum = a + b;
			a = b;
			b = sum;
			printf(", %ld", sum);
		}
	}
	printf("\n");
	return (0);
}
