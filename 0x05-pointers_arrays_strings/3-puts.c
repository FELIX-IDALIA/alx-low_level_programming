#include "main.h"

/**
 * _puts - starting point of the program
 *
 *
 * @str: represents pointer
 * Return: no return type
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
