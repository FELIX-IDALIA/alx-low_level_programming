#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: the linked list to be searched
 *
 * Return: returns the address of the node where the loop starts, or
 *	NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slower = head;
	listint_t *faster = head;

	if (!head)
		return (NULL);

	while (slower && faster && faster->next)
	{
		faster = faster->next->next;
		slower = slower->next;
		if (faster == slower)
		{
			slower = head;
			while (slower != faster)
			{
				slower = slower->next;
				faster = faster->next;
			}
			return (faster);
		}
	}

	return (NULL);
}
