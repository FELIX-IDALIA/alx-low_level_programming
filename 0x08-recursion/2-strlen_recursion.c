#include "main.h"

/**
 * _strlen_recursion - func, outputs returns length of a string
 * @s: string to calculate length
 *
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
