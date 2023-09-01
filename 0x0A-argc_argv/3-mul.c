#include <stdio.h>
#include <stdlib.h>
/**
 * main - func, multiplies two numbers
 * @argc: the no. of command line arguments
 * @argv: array containg program command line arguments.
 * Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
