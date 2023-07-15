#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer to the newly allocated concatenated string
 *         Returns NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	unsigned int c_length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);


	c_length = length_s1 + length_s2;

	c = malloc((c_length + 1) * sizeof(char));

	if (c == NULL)
		return (NULL);

	strcpy(c, s1);
	strcat(c, s2);

	return (c);
}
