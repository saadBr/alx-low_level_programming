#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing all possible different combinations of two digits. '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9 ; i++)
	{
		for (j = i + 1 ; j < 10 ; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
	
		}
	}
	putchar('\n');
	return (0);
}
