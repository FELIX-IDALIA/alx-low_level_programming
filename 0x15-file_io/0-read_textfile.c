#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 *	to the POSIX standard output.
 * @filename: name of the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_d;
	int rd, wrt;
	char *buff;

	if (!filename)
		return (0);

	f_d = open(filename, O_RDONLY);
	if (f_d < 0)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	rd = read(f_d, buff, letters);
	if (rd < 0)
	{
		free(buff);
		return (0);
	}
	buff[rd] = '\0';

	close(f_d);

	wrt = write(STDOUT_FILENO, buff, rd);
	if (wrt < 0)
	{
		free(buff);
		return (0);
	}

	free(buff);
	return (wrt);
}
