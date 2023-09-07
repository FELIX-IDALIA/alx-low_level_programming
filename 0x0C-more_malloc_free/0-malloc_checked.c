#include "main.h"
#include <stdlib.h>

/**
 *  *malloc_checked - func, allocates memory
 *  @b: the no. of bytes to allocate
 *
 *  Return: returns pointer to the memory allcocated
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
