#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing all possible different combinations of two two digits'
 * Return: Always 0 (Success)
 */
int main() {
   
	int first, second;

	for (first = 0; first <= 98; first++)
	{
		for (second = first + 1; second <= 99; second++)
		{
			putchar(48 + (first / 10));
			putchar(48 + (first % 10));
			putchar(' ');
			putchar(48 + (second / 10));
			putchar(48 + (second % 10));
			if (!( first == 98 && second == 99))
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}
