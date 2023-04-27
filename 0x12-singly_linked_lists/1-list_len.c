#include "lists.h"

/**
 * list_len - get list length
 *
 * @h: pointer to firts element
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			c++;
			h = h->next;
		}
		c++;
	}
	return (c);
}

