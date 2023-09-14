#include "variadic_functions.h"

/**
 * sum_them_all - performs sum of all parameters
 * @n: no. of arguments passed to the func
 *
 * Return: returns the sum of all parameters
 *	if n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
