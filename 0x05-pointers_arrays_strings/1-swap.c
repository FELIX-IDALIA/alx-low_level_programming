#include "main.h"

/**
 * swap_int - starting point
 *
 * @a: first int
 * @b: second int
 *
 * Return: no return type
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
