#include "lists.h"

/**
 * print_listint_safe - func, prints a listint_t linked list.
 * The function can print lists with loop
 * @head: the head
 *
 * Return: returns the no. of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int difference;

	while (head)
	{
		difference = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (difference > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
