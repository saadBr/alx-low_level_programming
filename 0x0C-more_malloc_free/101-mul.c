#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - check if a charachter is digit
 * @argv: argument to check
 * Return: 1 if c is digit , 0 if otherwise
 */

int _isdigit(char *argv[])
{
	int i = 1, j = 0;

	while (i <= 2)
	{
		for (; argv[i][j]; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
				return (1);
		}
		i++;
	}
	return (0);
}

/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */

void _puts(char *str)
{
	int i, j = 0;

	for (i = 0; str[j + 1]; j++)
	{
		if (str[j] != '0')
			break;
	}

	i = j;
	while (1)
	{
		if (str[i] == 0)
		{
			_putchar('\n');
			break;
		}

		_putchar(str[i]);
		i++;
	}
}

/**
  * rev_string - Prints a string in reverse
  * @s: The string to print
  * @n: size
  *
  * Return: void
  */

void rev_string(char *s, int n)
{
	int c;
	char swap;

	for (c = 0; c < n / 2 ; c++)
	{
		swap = *(s + n - 1 - c);
		*(s + (n - 1 - c)) = *(s + c);
		*(s + c) = swap;
	}
}


/**
 * _malloc - allocates n size byte.
 *
 * @n: size of memory to allocate to ptr.
 *
 * Return: a pointer to the allocated and initialized memory block.
*/

char *_malloc(int n)
{
	int i;
	char *ptr;

	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 0 ; i < n; i++)
		ptr[i] = '0';
	ptr[0] = 0;
	return (ptr);
}

/**
 * main - multiplies two numbers from argv.
 * @argc: Number of commands.
 * @argv: An array of pointers to argument strings.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i, j = 1, len1 = 0, len2 = 0, len, index, l = 1, rest = 0, tmp;
	int n1, n2;
	char *ptr;

	if (argc != 3 || _isdigit(argv))
	{
		_puts("Error");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
		len1++;
	for (i = 0; argv[2][i]; i++)
		len2++;
	len = len1 + len2 + 1;
	ptr = _malloc(len);
	for (i = len1 - 1; i >= 0; i--)
	{
		for (index = 0, j = len2 - 1; j >= 0; j--, index++)
		{
			n1 = (argv[1][i]) - '0';
			n2 = (argv[2][j]) - '0';
			tmp = (ptr[l + index] - '0') + n1 * n2 + rest;
			ptr[l + index] = (tmp % 10) + '0';
			rest = tmp / 10;
		}
		while (rest)
		{
			ptr[l + index] = (rest % 10) + '0';
			rest /= 10;
			index++;
		}
		l++;
	}
	rev_string(ptr, l + index - 1);
	_puts(ptr);
	free(ptr);
	return (0);
}
