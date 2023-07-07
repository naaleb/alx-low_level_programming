#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure the length
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}