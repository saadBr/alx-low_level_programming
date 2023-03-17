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
	int i, j, k;

	for (i = 0; i < 8 ; i++)
	{
		for (j = i + 1 ; j < 9 ; j++)
		{
			for (k = j + 1 ; k < 10 ; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
