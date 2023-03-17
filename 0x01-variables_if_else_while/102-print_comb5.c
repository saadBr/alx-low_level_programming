#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing all possible different combinations of two two digits'
 * Return: Always 0 (Success)
 */
int main() {
   
	int tens;
	int ones;
	int t;
	int o;

	for (tens = '0'; tens <= '9'; tens++) /*print first two digit combo*/
	{
		for (ones = '0'; ones <= '9'; ones++)
		{
		 	for (t = tens; t <= '9'; t++) /*print second of pair*/
			{
				for (o = ones + 1; o <= '9'; o++)
				{
					putchar(tens);
					putchar(ones);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((tens == '9' && ones == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
