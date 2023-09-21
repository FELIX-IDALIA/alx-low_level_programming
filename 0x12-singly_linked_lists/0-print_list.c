#include "lists.h"

/**
 * print_list - func, outputs all elements of  struct list
 * @h:is the structure
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int f;

	for (f = 0; h; f++)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (f);
}
