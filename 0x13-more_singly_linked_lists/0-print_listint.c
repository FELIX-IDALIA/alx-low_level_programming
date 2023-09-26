#include "lists.h"

/**
 * print_listint - a function that prints all elements of listint_t list
 * @h: integer
 *
 * Return: return number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
