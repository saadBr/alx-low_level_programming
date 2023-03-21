#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing the first 100 fibonacci number '
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, sum;
	int i;

	printf("1, 2");
	for (i = 1; i < 49 ; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %ld", sum);
	}
	printf("\n");
	return (0);
}
