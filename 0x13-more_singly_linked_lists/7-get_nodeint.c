#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 *
 * @head: Head node.
 * @i: Node index.
 *
 * Return: node of index n or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int i)
{
	unsigned int j = 0;

	if (head)
	{
		if (i > listint_len(head))
			return (NULL);
		while (head->next)
		{
			while (j < i)
			{
				head = head->next;
				j++;
			}
			if (head)
				return (head);
		}
	}
	return (head);
}

/**
 * listint_len - get list length
 *
 * @h: pointer to firts element
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
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

