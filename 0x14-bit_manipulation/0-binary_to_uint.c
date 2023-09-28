#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: return the converted number, 0 or if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int x, y;

	if (!b)
		return (0);

	uint = 0;

	for (x = 0; b[x] != '\0'; x++)
		;

	for (x--, y = 1; x >= 0; x--, y *= 2)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}

		if (b[x] & 1)
		{
			uint += y;
		}
	}

	return (uint);
}
