#include "lists.h"

/**
 * add_node - func, adds new node at the beginning
 * @head: head of list
 * @str: needs to be duplicated
 * Return: returns *head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * _strlen - func, calculates len of a const char string
 * @s: string to use
 * Return: returns len of string.
 */

int _strlen(const char *s)
{
	unsigned int f;

	for (f = 0; s[f] != '\0'; f++)
	{
	}
	return (f);
}
