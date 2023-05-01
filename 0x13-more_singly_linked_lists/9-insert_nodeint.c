#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: head node
 * @idx: index of list where we add new node
 * @n: int to add
 *
 * Return: adress of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *right, *left = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (new);
	right = *head;
	while (i < idx && right)
	{
		left = right;
		right = right->next;
		i++;
	}
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else if (idx > listint_len(*head))
	{
		free(new);
		return (NULL);
	}
	new->next = right;
	left->next = new;
	return (new);
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
