#include "main.h"
/**
 * _strcpy - Copy string pointed from src to dest.
 * @dest: Pointer to destination array.
 * @src: Pointer to  source string.
 *
 * Return: Pointer to dest. string.
 */
char *_strcpy(char *dest, char *src)
{
	int src_l = 0;
	int index = 0;

	while (src[src_l] != '\0')
	{
		src_l++;
	}

	for (; index < src_l; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
	return (dest);
}
