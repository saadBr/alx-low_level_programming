#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to first element in list
 *
 * Return: adress where the loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp1 = head, *tmp2 = head;

	if (head)
	{
		while (tmp1 && tmp1->next)
		{
			tmp1 = tmp1->next->next;
			tmp2 = tmp2->next;
			if (tmp1 == tmp2)
				break;
		}

		if (!tmp1 || !tmp1->next)
			return (NULL);
		tmp2 = head;

		if (tmp2 != tmp1)
		{
			while (tmp2 != tmp1)
			{
				tmp1 = tmp1->next;
				tmp2 = tmp2->next;
			}
			return (tmp2);
		}
	}
	return (head);
}
