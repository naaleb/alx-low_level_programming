#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int i = 0;
	int length = 0;

	while (s[length] != '\0')
	{
		i++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
