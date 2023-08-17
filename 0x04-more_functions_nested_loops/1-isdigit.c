#include "main.h"

/**
 * _isdigit - Entry point
 * @c: integer to be checked
 * Return: if c is a digit 1 is returned, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
