#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: address pf a pointer of first element
 * @n: integer  to add
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	return (new);
}

