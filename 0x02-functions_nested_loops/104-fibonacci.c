#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Description:'printing the first 98 fibonacci number '
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a = 1, b = 2, sum;
	long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;
	int i, overflow;

	printf("1, 2");
	for (i = 1; i < 90 ; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %ld", sum);
	}

	a_head = a / 1000000000;
	a_tail = a % 1000000000;
	b_head = b / 1000000000;
	b_tail = b % 1000000000;

	for (i = 90; i < 97; i++)
	{
		overflow = (a_tail + b_tail) / 1000000000;
		sum_tail = (a_tail + b_tail) - (1000000000 * overflow);
		sum_head = (a_head + b_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		a_head = b_head;
		a_tail = b_tail;
		b_head = sum_head;
		b_tail = sum_tail;
	}



	printf("\n");
	return (0);
}
