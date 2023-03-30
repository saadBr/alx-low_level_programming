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
	int l1 = _strlen(n1), l2 = _strlen(n2), i, j, k, re = 0, tmp = 0, big;

	if (l2 >= l1)
		big = l2, i = l1 - 1, j = l2 - 1, k = l2;
	else
		big = l1, i = l2 - 1, j = l1 - 1, k = l1;
	if (size_r > big + 1)
	{
		for (; i >= 0; i--, j--, k--)
		{
			r[k] = (((n1[j] - 48) + (n2[i] - 48) + re) % 10) + '0';
			re = ((n1[j] - 48) + (n2[i] - 48) + re) / 10;
		}
		for (; j >= 0 ; j--, k--)
		{
			if (l2 > l1)
			{
				r[k] = (((n2[j] - 48) + re) % 10) + '0';
				re = ((n2[j] - 48) + re) / 10;
			}
			else
			{
				r[k] = (((n1[j] - 48) + re) % 10) + '0';
				re = ((n1[j] - 48) + re) / 10;
			}
		}
		if (re > 0)
			r[k] = re + '0';
		else
		{
			k = 0;
			for (; k < big; k++)
				tmp = r[k], r[k] = r[k + 1], r[k + 1] = tmp;
			r[big] = '\0';
		}
		return (r);
	}
	else
		return (0);
}
