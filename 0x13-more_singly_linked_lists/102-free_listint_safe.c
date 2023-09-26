#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * The function can free list with a loop.
 * @h: a pointer pointing to the first node in the linked list
 *
 * Return: returns the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *list;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			list = (*h)->next;
			free(*h);
			*h = list;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}

	*h = NULL;

	return (length);
}
