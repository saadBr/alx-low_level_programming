#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'print the numbers of base 16.'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
		putchar(48 + i);
	for (i = 'a'; i <= 'f' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
