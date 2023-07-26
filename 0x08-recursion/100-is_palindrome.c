#include "main.h"
#include <stdio.h>
#include <stdbool.h>

/**
 * is_palindrome - Checks if a string is a palindrome using recursion.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int i; 
	int j;
	int length = 0;

	if (s == NULL)
		return 0;

	while (s[length] != '\0')
		length++;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
			return 0;
	}

	return 1;
}
