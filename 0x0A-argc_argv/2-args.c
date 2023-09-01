#include <stdio.h>

/**
 * main - func, ouputs the no. of arguments passed into it
 * @argc: the no. of command line arguments
 * @argv: array containg programs command line arguments
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
