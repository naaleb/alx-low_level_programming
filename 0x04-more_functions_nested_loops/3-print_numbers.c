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
	char numbers[] = "0123456789$";

	for (x = 0; x < 11; x++)
	{
		_putchar(numbers[x]);
	}
	_putchar('\n');
}
