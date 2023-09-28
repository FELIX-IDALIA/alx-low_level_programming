#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer pointing to the number to be changed
 * @index: is the index, starting from 0 of the bit you want to set.
 *
 * Return: returns 1 if it worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int y;

	if (index > 63)
		return (-1);

	y = 1 << index;

	if (*n & y)
		*n ^= y;

	return (1);
}
