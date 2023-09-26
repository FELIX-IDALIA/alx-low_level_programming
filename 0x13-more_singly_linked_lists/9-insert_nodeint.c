#include "lists.h"

/**
 * insert_nodeint_at_index - func, inserts a new node at a given position.
 * @head: ptr to the node that comes first
 * @idx: is the index of the list where the new node should be added.
 * @n: integer to insert in the new node
 *
 * Return: returns the address of the new node, or Null if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,
		int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *list = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (x = 0; list && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new->next = list->next;
			list->next = new;
			return (new);
		}
		else
			list = list->next;
	}

	return (NULL);
}
