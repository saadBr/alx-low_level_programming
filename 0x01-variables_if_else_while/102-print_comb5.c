#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing all possible different combinations of two two digits'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k = i; k < 10; k++)
			{
				for (l = j + 1; l < 10; l++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + k);
					putchar(48 + l);
					if (!(i == 9 && j == 8 && k == 9 && l == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				l = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
