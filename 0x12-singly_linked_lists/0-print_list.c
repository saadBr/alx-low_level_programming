#include "lists.h"

/**
 * print_list - prints list's element
 *
 * @h: pointer to firts element
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int c = 0;

	if(h)
	{
		while (h->next)
		{
			printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
			c++;
			h = h->next;
		}
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		c++;
	}
	return (c);
}

