#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of s2 bytes to concatenate
 *
 * Return: Pointer to newly allocated memory containing concatenated string
 *         If allocation fails, returns NULL
 *         If n is greater or equal to length of s2, use the entire string s2
 *         If NULL is passed, treats it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int length_result = 0;

	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	if (n >= length_s2)
		n = length_s2;

	length_result = length_s1 + n;

	result = malloc((length_result + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strncat(result, s2, n);

	result[length_result] = '\0';

	return (result);
}
