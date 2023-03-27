#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0, start = 0, power = 1, sign = 1, i;
	unsigned int num = 0;

	while (s[c] != '\0')
		c++;

	while (s[start] != '\0')
	{
		if (s[start] >= '0' && s[start] <= '9')
			break;
		start++;
	}
	for (i = 0; i < start; i++)
	{
		if (s[i] == '-')
			sign *= (-1);
	}
	while (start < c && s[start] >= '0' && s[start] <= '9')
	{
		if (power == 1)
		{
			num = s[start] - '0';
			power *= 10;
		}
		else
			num = (num * power) + (s[start] - '0');
		start++;
	}

	return (num * sign);

}
