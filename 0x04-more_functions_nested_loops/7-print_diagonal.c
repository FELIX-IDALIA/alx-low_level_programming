#include "main.h"

/**
 * print_diagonal - outputs diagonal line n times.
 * @n: times the diagonal line is printed.
 * Return: No return type
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
