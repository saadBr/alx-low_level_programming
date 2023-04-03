#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the sum of the diagonal metrix
 * @a: matrix to be summed
 * @size: size of the matrix/
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, leftsum = 0, rightsum = 0;

	for (i = 0; i < size; i++, j = j + size + 1)
		leftsum += *(a + j);

	j = size - 1;

	for (i = 0; i < size; i++, j = j + size - 1)
		rightsum += *(a + j);

	printf("%d, %d\n", leftsum, rightsum);
}
