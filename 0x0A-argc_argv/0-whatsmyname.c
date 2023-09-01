#include <stdio.h>

/**
 * main - func, outputs name of the program
 * @argc: no. of command line arguments
 * @argv: array containg program command line arguments
 *
 * Return: returns 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
