#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the size of various type of this computer.
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n",siezof(char));
	printf("Size of an int: %d byte(s)\n",siezof(int));
	printf("Size of a long int: %d byte(s)\n",siezof(long int));
	printf("Size of a long long int: %d byte(s)\n",siezof(long long int));
	printf("Size of a float: %d byte(s)\n",siezof(float));
	return (0);
}
