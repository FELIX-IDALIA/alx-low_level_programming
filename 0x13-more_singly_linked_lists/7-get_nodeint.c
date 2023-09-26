#include "lists.h"

/**
 * get_nodeint_at_index - func, returns the nth node of a list_int linked list.
 * @head: head of the list
 * @index: is the index of the node, starting 0.
 * Return: If the node does not exist, return NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
