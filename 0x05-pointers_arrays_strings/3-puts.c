#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string to stdout
 * @str: The string to be printed
 *
 * Return: None
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
