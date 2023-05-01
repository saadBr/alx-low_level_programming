#include "lists.h"

/**
 * free_listint_safe - free list
 *
 * @h: pointer to first
 *
 * Return: size of list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *list, *aux1 = *h, *aux2 = *h, *l;
	int size = 0;

	if (*h)
	{
		while (aux1 && aux1->next)
		{
			aux2 = aux2->next;
			aux1 = aux1->next->next;
			if ((aux1 == aux2) && aux2 != NULL)
				break;
		}
		if (aux1 == aux2)
		{
			l = aux2;
			aux2 = *h;
			if (aux2 == l)
			{
				aux1 = aux1->next;
				aux1->next = NULL;
			}
			else
			{
				while (aux1 != aux2)
				{
					l = aux1;
					aux2 = aux2->next;
					aux1 = aux1->next;
				}
				l->next = NULL;
			}
		}
		while ((list = *h))
		{
			*h = (*h)->next;
			size++;
			free(list);
		}
	}
	return (size);
}
