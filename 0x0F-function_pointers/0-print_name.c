#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - funtion, otputs name
 * @name: name to output
 * @f: a function pointer
 *
 * Return: nothing to return.
 */

void print_name(char *name, void (*f) (char *))
{
	if (name && f)
		f(name);
}
