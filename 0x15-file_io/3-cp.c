#include "main.h"

/**
 * main - A program that copies the content of a file to another file
 * @argc: the no. of args passed to the program
 * @argv: the array of args
 *
 * Return: return 0 (success).
 */
int main(int argc, char *argv[])
{
	int f_d_r, f_d_w, rd, ab, bc;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_d_r = open(argv[1], O_RDONLY);
	if (f_d_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_d_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(f_d_r, buf, BUFSIZ)) > 0)
	{
		if (f_d_w < 0 || write(f_d_w, buf, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f_d_r);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ab = close(f_d_r);
	bc = close(f_d_w);
	if (ab < 0 || bc < 0)
	{
		if (ab < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d_r);
		if (bc < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_d_w);
		exit(100);
	}
	return (0);
}
