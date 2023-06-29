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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = '\0';

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
