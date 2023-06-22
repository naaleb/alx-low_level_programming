#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints natural numbers from n to 98
 * @n: Starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
		_putchar(n + '0');

	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
		_putchar(n + '0');

	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	}
	_putchar('\n');
}
