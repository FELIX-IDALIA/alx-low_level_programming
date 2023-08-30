#include "main.h"

/**
 * factorial - func, outputs factorial of given number
 * @n: int to be checked
 *
 * Return: returns factorial of no.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
