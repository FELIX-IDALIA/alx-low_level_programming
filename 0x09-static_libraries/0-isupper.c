#include "main.h"

/**
 * _isupper - function to check for uppercase characters
 * @c: character to be checked
 * Return: if c is uppercase 1 is returned, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
