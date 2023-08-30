#include "main.h"

/**
 * _print_rev_recursion - fucc, prints a string in reverse order
 * @s: pointer, string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
