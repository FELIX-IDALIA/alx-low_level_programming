#include "lists.h"

/**
 * free_listint - func, frees a listint_t list
 * @head: listint_t  that is to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head->next;
		free(head);
		head = list;
	}
}
