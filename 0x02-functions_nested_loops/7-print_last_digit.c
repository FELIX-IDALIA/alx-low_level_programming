#include "main.h"
/**
 * print_last_digit - program entry point
 * @x: integer to extract the last digit from
 * Return: return type
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;

	y = x % 10;

	if (y < 0)
		y = -y;
	_putchar(y + '0');

	return (y);
}
