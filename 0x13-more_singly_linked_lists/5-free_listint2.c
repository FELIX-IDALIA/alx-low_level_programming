#include "lists.h"

/**
 * free_listint2 - func, frees a listint_t list.
 * @head: ptr to listint_t list that should be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	*head = NULL;
}
