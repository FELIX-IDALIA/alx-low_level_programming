#include "main.h"
#include <stdio.h>

/**
 * print_array - program starting point
 *
 * @a: represents array to be printed
 * @n: represnts number of characters to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");

	}
	printf("\n");
}
