#include <stdio.h>
#include <ctype.h>
/**
 * main- starting point
 *
 * Return: success (0)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(toupper(alphabet));
	}
	putchar('\n');
	return (0);
}
