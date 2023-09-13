#include "function_pointers.h"

/**
 * array_iterator - function that executes parameters on each element of array
 *
 * @array: an array that is iterated over
 * @size: array size
 * @action: a pointer to a function that is used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array && action)
		for (z = 0; z < size; z++)
			action(array[z]);
}
