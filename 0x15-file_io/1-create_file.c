#include "main.h"

/**
 * create_file - Creates a file and writes content to it.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to the content to write to the file.
 *
 * Return: On failure, returns -1 and 1 on success.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, file_d, w;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file_d == -1)
		return (-1);

	w = write(file_d, text_content, len);
	if (w == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
