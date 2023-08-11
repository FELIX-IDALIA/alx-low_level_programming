#include <stdio.h>
/**
 * main - starting point of a program
 * Return: 0 returned when success
 */
int main(void)
{
	char alphabet = 'y';

	while (alphabet >= 'x')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
