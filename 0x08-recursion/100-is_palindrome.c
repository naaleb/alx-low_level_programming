#include "main.h"
#include <stdio.h>
#include <stdbool.h>

int check_palindrome(char *str, int start, int end);
int string_length(char *str);

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if it is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, string_length(s)));
}

/**
 * string_length - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: Length of the string.
 */
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_length(s + 1));
}

/**
 * check_palindrome - Recursively checks if a string is a palindrome.
 * @s: The string to check.
 * @start: Start index of the string.
 * @end: End index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 if it's not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);
	if (start >= end)
		return (1);
	return (check_palindrome(s, start + 1, end - 1));
}

