#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file.
 *
 * Return: returns 1 on success and -1 (if filename is NULL) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f_d;
	int nOfletters;
	int rwrt;

	if (!filename)
		return (-1);

	f_d = open(filename, O_WRONLY | O_APPEND);

	if (f_d == -1)
		return (-1);

	if (text_content)
	{
		for (nOfletters = 0; text_content[nOfletters]; nOfletters++)
			;
		rwrt = write(f_d, text_content, nOfletters);

		if (rwrt == -1)
			return (-1);
	}

	close(f_d);

	return (1);
}
