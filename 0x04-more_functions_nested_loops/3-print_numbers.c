#include "main.h"
/**
 * print_numbers - Prints numbers from 0 to 9.
 *
 * Description: This function prints the numbers from 0 to 9
 *              followed by a newline character.
 *
 * Return: void
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
		_putchar('\n');
}
