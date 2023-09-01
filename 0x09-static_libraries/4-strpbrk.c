#include "main.h"

/**
 * *_strpbrk - func:searches string for any set of bytes
 * @s: string to be searched
 * @accept: string that contains byte to be looked for
 *
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
