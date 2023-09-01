#include "main.h"

/**
 * *_memcpy - function:copies memory area
 * @dest: memory area of dest
 * @src: area of memory to be coipied
 * @n: no. of bytes to be copied
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
