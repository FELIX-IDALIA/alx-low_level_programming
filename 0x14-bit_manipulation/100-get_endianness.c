#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: returns 0 for big, 1 for little endian
 */

int get_endianness(void)
{
	unsigned int xy;
	char *bc;

	xy = 1;
	bc = (char *) &xy;

	return ((int)*bc);
}
