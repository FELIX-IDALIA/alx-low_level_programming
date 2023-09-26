#include "lists.h"

/**
 * listint_len - func, returns the no. of elements in a linked listint_t list
 * @h: integer
 *
 * Return: returns number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
