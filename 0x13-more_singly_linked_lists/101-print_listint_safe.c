#include "lists.h"

/**
 * print_listint_safe - printf a linked list
 * @head: pointer to the first node
 *
 * Return: number of node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *aux, *list;
	int c = 0, i = 0;

	if (head)
	{
		aux = head;
		while (aux->next)
		{
			list = head;
			i = 0;
			printf("[%p] %d\n", (void *)aux, aux->n);
			aux = aux->next;
			c++;
			while (i < c)
			{
				if (list == aux)
				{
					printf("-> [%p] %d\n", (void *)aux, aux->n);
					return (c);
				}
				list = list->next;
				i++;
			}
		}
		printf("[%p] %d\n", (void *)aux, aux->n);
		c++;
	}
	return (c);
}
