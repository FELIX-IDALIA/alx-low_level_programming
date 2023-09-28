#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: num 1
 * @m: num 2
 *
 * Return: returns number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int curr;
	unsigned long int exc = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		curr = exc >> x;
		if (curr & 1)
			num++;
	}

	return (num);
}
