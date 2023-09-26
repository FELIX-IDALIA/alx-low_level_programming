#include "lists.h"

/**
 * pop_listint - func, deletes the head of a listint_t linked list
 * @head: ptr to first element in linked list
 *
 * Return: if linked list is empty return (0).
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;

	return (number);
}
