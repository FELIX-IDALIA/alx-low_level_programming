#include "main.h"

/**
 * _strlen - program starting point
 *
 * @s: represents function parameter
 *
 * Return: returns count
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
