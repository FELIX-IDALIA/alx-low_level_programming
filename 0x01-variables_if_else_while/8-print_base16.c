#include <stdio.h>
/**
 * main - starting point of a program
 * Return: 0 returned when success
 */
int main(void)
{
	int base;
	char base_16;

	for (base = 48; base < 58; base++)
	{
		putchar(base);
	}
	for (base_16 = 'a'; base_16 <= 'f'; base_16++)
	{
		putchar(base_16);
	}
	putchar('\n');
	return (0);
}
