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
	int i = 0;

	for (i = 0; i < 10 ; i++)
		putchar(48 + i);
	putchar('\n');
	return (0);
}
