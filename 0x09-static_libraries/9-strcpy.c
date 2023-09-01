#include "main.h"

/**
 * *_strcpy - program starting point
 * @dest: ponter (destination)
 * @src: pointer (source)
 * Return: returns the pointer (destination)
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
