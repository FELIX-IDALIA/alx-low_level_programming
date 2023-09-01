#include "main.h"

/**
 * *_strchr - func:locates a character in a string
 * @s: string that is searched
 * @c: char to be found
 *
 * Return: returns pointer to the first occurence of char
 * c in string s, or NULL if char isn't  found
 */

char *_strchr(char *s, char c)
{
	unsigned int a = 0;

	for (; *(s + a) != '\0'; a++)
		if (*(s + a) == c)
			return (s + a);
	if (*(s + a) == c)
		return (s + a);
	return ('\0');
}
