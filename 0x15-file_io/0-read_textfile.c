#include "main.h"

/**
 * read_textfile - Read text file and print it to POSIX STDOUT
 * @filename: Name of text file to be read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed.
 *         returns 0 on failure, when filename is NULL, or no bytes are read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(file_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
