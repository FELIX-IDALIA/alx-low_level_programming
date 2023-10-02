#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: returns 1 on success, -1 on failure
 *	(file cab not be created, file can not be written, write "fails", etc)
 */

int create_file(const char *filename, char *text_content)
{
	int f_d, wrt, x = 0;

	if (!filename)
		return (-1);

	f_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f_d == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[x])
			x++;
		wrt = write(f_d, text_content, x);
		if (wrt != x)
			return (-1);
	}

	close(f_d);

	return (1);
}
