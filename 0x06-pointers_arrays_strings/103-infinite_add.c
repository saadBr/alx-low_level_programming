#include "main.h"
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */

int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
		length++;
	return (length);
}
/**
 * infinite_add - adds two numbers
 * @n1: number one argument for *infinite_add
 * @n2: number two argument for *infinite_add
 * @r: buffer that the function will use to store the result
 *    argument for *infinite_add
 * @size_r: buffer size argument for *infinite_add
 * Return: the pointer to dest
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = _strlen(n1), l2 = _strlen(n2), n1_int, n2_int, re = 0, big, add;

	if (l1 >= l2)
		big = l1;
	else
		big = l2;
	if (size_r <= big + 1)
		return (0);
	*(r + (big + 1)) = '\0';
	l1--, l2--, size_r--;
	n1_int = *(n1 + l1) - 48, n2_int = *(n2 + l2) - 48;
	while (big >= 0)
	{
		add = n1_int + n2_int + re;
		if (add >= 10)
			re = add / 10;
		else
			re = 0;
		if (add > 0)
			*(r + big) = (add % 10) + 48;
		else
			*(r + big) = '0';
		if (l1 > 0)
			l1--, n1_int = *(n1 + l1) - 48;
		else
			n1_int = 0;
		if (l2 > 0)
			l2--, n2_int = *(n2 + l2) - 48;
		else
			n2_int = 0;
		big--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
