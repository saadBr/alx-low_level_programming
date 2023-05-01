#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head node
 * @index: index of node to delete
 *
 * Return: 1 if successed or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *right, *aux, *list;
	unsigned int i = 0;

	if (head)
	{
		right = *head;
		if (index == 0 && listint_len(*head) > 0)
		{
			list = right;
			aux = right->next;
			*head = aux;
			free(list);
			return (1);
		}
		while (i < index - 1 && right)
		{
			right = right->next;
			i++;
		}

		if (index >= listint_len(*head))
			return (-1);
		list = right->next;
		right->next = right->next->next;
		free(list);
		return (1);
	}
	return (-1);
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

