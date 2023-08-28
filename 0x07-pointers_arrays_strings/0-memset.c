#include "main.h"

/**
 * _memset - function: entry point
 * @s: memory to be filled
 * @b: character to be copied
 * @n: number of times b should be copied
 *
 * Return: returns pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
