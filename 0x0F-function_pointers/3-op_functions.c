#include "3-calc.h"

/**
 * op_add - sum of two numbers
 * @a: first int
 * @b: second int
 *
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subctraction of two numbers
 * @a: first int
 * @b: second int
 *
 * Return: returns the differnce of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two numbers
 * @a: first int
 * @b: second int
 *
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first int
 * @b: second int
 *
 * Return: returns the result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates mod of two numbers
 * @a: first int
 * @b: second int
 *
 * Return: returns remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
