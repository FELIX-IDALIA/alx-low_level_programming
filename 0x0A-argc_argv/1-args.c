#include <stdio.h>

/**
 * main - func, outputs the arguments
 * @argc: the no. of command line arguments
 * @argv: array containing programs command line arguments
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
