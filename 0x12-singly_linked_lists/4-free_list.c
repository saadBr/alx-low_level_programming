#include "lists.h"

/**
 * free_list - free list
 *
 * @head: pointer to the first element
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node =  head))
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
