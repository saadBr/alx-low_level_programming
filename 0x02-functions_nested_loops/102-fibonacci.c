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
	int a = 1, b = 2, i, sum;

	printf("1 ,2");
	for (i = 1; i < 100 ; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(" ,%ld", sum)
	}
	return (0);
}
