#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: address pf a pointer of first element
 * @str: str  to add
 * Return: address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;

	aux = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	if(!*head)
	{
		*head = new;
		return (*head);
	}
	while(aux->next)
		aux = aux->next;
	aux->next = new;
	return (new);
}
