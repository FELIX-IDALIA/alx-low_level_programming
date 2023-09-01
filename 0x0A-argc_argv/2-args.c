#include <stdio.h>

/**
 * main - func, outputs all arguments
 * @argc: the no. of command line arguments
 * @argv: array containing programs command line arguments
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
