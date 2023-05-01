#include "lists.h"

/**
 * print_listint -  printing all elements of a listint_t list.
 *
 * @h: first element in listint_t.
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			printf("%d\n", h->n);
			c++;
			h = h->next;
		}
			printf("%d\n", h->n);
			c++;
	}
	return (c);
}
