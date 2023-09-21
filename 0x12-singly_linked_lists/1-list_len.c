#include "lists.h"

/**
 * list_len - func, returns no. of elements in linked list.
 * @h: structure
 * Return: returns number of elements (f).
 */

size_t list_len(const list_t *h)
{
	unsigned int f;

	for (f = 0; h; f++)
	{
		h = h->next;
	}
	return (f);
}
