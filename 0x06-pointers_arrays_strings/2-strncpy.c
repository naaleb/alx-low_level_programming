#include "main.h"

/**
 * _strncpy - Copy at most n bytes from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the @dest. string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count_of_bytes;

	for (count_of_bytes = 0; count_of_bytes < n &&
			src[count_of_bytes] != '\0'; count_of_bytes++)
		dest[count_of_bytes] = src[count_of_bytes];

	for (; count_of_bytes < n; count_of_bytes++)
		dest[count_of_bytes] = '\0';

	return (dest);
}
