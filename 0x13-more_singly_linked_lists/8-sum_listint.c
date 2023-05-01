#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @head: Head node.
 *
 * Return: 0 if list is empty or sum of n of all nodes.
 */

int sum_listint(listint_t *head)
{
	int sum_list = 0;

	if (head)
	{
		while (head->next)
		{
			sum_list += head->n;
			head = head->next;
		}
		sum_list += head->n;
	}
	return (sum_list);
}

