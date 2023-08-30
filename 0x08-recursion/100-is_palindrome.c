#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - func, checks if string is a palindrome
 * @s: string to be reversed
 *
 * Return: returns 1 if it ispalindrome, 0 if it isn't
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - func, returns length of a string
 * @s: string to calculate length
 *
 * Return: returns length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - func, checks characters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 *
 * Return: returns 1 if palindrome, 0 if isn't
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
