#include "main.h"

/**
 * actual_prime - fonc, calculates if a number is prime recursively
 * @n: number to be  evaluated
 * @i: iterator
 *
 * Return: returns 1 if n is prime, 0 if is't
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - func, says if an integer is a prime number or not
 * @n: number to be evaluated
 *
 * Return: returns 1 if n is a prime number, 0 if isn't
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
