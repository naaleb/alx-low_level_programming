#include "main.h"
#include <stdbool.h>

/**
 * wildcmp - compares two strings and returns 1 if strings is identical
 *
 * @s1: first string to compare.
 * @s2: second string to compare
 *
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*s1 != '\0')
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2 + 1));
		else
			return (wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2 || *s2 == '?')
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

