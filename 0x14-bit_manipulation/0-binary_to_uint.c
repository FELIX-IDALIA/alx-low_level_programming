#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: return the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		uint = 2 * uint + (b[x] - '0');
	}

	return (uint);
}
