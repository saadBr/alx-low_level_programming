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
	int c;

	/* your code goes there */
	for (c = 'a'; c <= 'z'; c++)
	       putchar(c);
	putchar('\n');
	return (0);
}

