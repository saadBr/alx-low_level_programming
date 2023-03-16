#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints to the standard error'
 * Return: 1 (failure)
 */
int main(void)
{
	char str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s", str);
	return (1);
}
