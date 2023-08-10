/*
 *  6-size.c file
 *
 *  sizeof
 */

#include <stdio.h>

/**
 * main -starting point of the program
 *
 *  prints -size of various types on the computer it is compiled and run on.
 *
 * Return: 0 on success, non-zero incase of an error
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
