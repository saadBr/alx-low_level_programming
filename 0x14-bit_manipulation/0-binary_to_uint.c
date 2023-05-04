#include "main.h"

/**
 * binary_to_uint - convert vinary to unisgned int
 * @b: string to hold binary
 *
 * Return:converten number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
		len++, i++;
	i = 0;
	len--;
	while (b[i] != '\0')
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
		if (b[i] == '1')
			res += (1 * (1 << len));
		i++;
		len--;
	}

	return (res);
}
