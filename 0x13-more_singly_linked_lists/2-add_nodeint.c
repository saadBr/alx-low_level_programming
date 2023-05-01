#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of the list
 * @head: address pf a pointer of first element
 * @n: integer  to add
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

