#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing the sum of numbers that are multiple of 3 or 5 '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum;

	for (i = 0; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
	}
	printf("%d \n", sum);
	return (0);
}
