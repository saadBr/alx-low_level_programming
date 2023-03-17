#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'print the numbers.'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i=0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
