#include "lists.h"

/**
 * free_listint2 - free list
 *
 * @head: pointer to the first element
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		while ((node = *head))
		{
			*head = (*head)->next;
			free(node);
		}
		*head = NULL;
	}
}
