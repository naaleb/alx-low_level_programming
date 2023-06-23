#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 (excluding 2 and 4)
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (x != 2 && != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}
