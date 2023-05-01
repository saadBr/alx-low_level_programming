#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 *
 * @head: head node.
 *
 * Return: head node’s data (n)or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int n = 0;

	aux = *head;

	if (*head)
	{
		n = (*head)->n;
		*head = aux->next;
		free(aux);
	}
	return (n);
}
