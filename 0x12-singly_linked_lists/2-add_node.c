#include "lists.h"

/**
 * add_node - adds a new node at beginning of the list
 * @head: address pf a pointer of first element
 * @str: str  to add
 * Return: address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
