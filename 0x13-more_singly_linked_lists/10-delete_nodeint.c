#include "lists.h"

/**
 * delete_nodeint_at_index - func, deletes the node at index of a list_int
 * @head: a ptr pointing to the first element in the list
 * @index: is the index of the node that should be deleted.
 *	index starts at 0.
 *
 * Return: returns 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list = *head;
	listint_t *now = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(list);
		return (1);
	}

	while (x < index - 1)
	{
		if (!list || !(list->next))
			return (-1);
		list = list->next;
		x++;
	}

	now = list->next;
	list->next = now->next;
	free(now);

	return (1);
}
