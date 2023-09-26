#include "lists.h"

/**
 * sum_listint - func, returns the sum of all the data (n)
 * @head: is the node that comes first in the linked list
 *
 * Return: returns the total
 * If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{
	int total;

	total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
