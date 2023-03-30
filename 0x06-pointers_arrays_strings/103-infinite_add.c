#include "main.h"
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
	int len1 = 0, len2 = 0, i = 0, j = 0, k, reste = 0, tmp = 0;

	while (*(n1 + i) != '\0')
	{
		len1++;
		i++;
	}
	while (*(n2 + j) != '\0')
	{
		len2++;
		j++;
	}
	if (len2 >= len1 && size_r > len2 + 1)
	{
		for (i = len1 - 1, j = len2 - 1, k = len2; i >= 0; i--, j--, k--)
		{
			r[k] = (((n1[i] - 48) + (n2[j] - 48) + reste) % 10) + '0';
			reste = ((n1[i] - 48) + (n2[j] - 48) + reste) / 10;
		}
		for (; j >= 0 ; j--, k--)
		{
			r[k] = (((n2[j] - 48) + reste) % 10) + '0';
			reste = ((n2[j] - 48) + reste) / 10;
		}
		if (reste > 0)
			r[k] = reste + '0';
		else
		{
			k = 0;
			for (; k < len2; k++)
			{
				tmp = r[k];
				r[k] = r[k + 1];
				r[k + 1] = tmp;
			}
			r[len2] = '\0';
		}
		return (r);
	}
	else if (len1 > len2 && size_r > len1 + 1)
	{
		for (i = len2 - 1, j = len1 - 1, k = len1; i >= 0; i--, j--, k--)
		{
			r[k] = (((n1[j] - 48) + (n2[i] - 48) + reste) % 10) + '0';
			reste = ((n1[j] - 48) + (n2[i] - 48) + reste) / 10;
		}
		for (; j >= 0 ; j--, k--)
		{
			r[k] = (((n1[j] - 48) + reste) % 10) + '0';
			reste = ((n1[j] - 48) + reste) / 10;
		}
		if (reste > 0)
			r[k] = reste + '0';
		else
		{
			k = 0;
			for (; k < len1; k++)
			{
				tmp = r[k];
				r[k] = r[k + 1];
				r[k + 1] = tmp;
			}
			r[len1] = '\0';
		}
		return (r);
	}
	else
		return (0);
}
