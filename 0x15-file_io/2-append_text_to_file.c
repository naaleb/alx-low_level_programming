#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Pointer to the name of the file.
 * @text_content: Pointer to the string to be added to the end of the file.
 *
 * Return: returns -1 on failure or if filename is NULL
 *         If file doesn't exist or user has no write permissions, returns -1.
 *         And on success, returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, file_d, wr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len]; len++)
		;
	}

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	wr = write(file_d, text_content, len);
	if (wr == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}


