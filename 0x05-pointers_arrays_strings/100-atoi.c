#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int c = 0, start = 0, num = 0, power = 1, sign = 1;
	
	while (s[c] != '\0')
		c++;

	while (s[start] != '\0')
	{
		if (s[start] >= '0' && s[start] <= '9')
			break;
		else
			start++;
	}
	if (s[start-1] == '-')
		sign *= (-1);
	while (start < c && s[start] >= '0' && s[start] <= '9')
	{
		if (power == 1)
		{
			num = s[start] - '0';
			power*=10;
		}
		else 
			num = (num * power) + (s[start] - '0');
		start++;
	}

	return num*sign;

}
