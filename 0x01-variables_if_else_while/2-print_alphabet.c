#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'print the alphabet.'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
