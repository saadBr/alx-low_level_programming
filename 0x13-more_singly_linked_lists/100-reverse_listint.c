#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 *
 * @head: pointer to first element in the list
 *
 * Return: pointer to first element
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux1 = NULL, *aux2 = NULL;

	if (head)
	{
		while (*head)
		{
			aux1 = (*head)->next;
			(*head)->next = aux2;
			aux2 = *head;
			*head = aux1;
		}
		*head = aux2;
	}
	return (*head);
}
