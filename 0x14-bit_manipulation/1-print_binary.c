#include "main.h"

/**
 * print_binary – Prints the binary representation of a number.
 * @n: The number to print in binary
 *
 * Description
 * Function to prints binary resprentation of a given number
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int i;
	unsigned long int numb;

	for (i = 75; i >= 0; i--)
	{
		numb = n >> i;

		if (numb & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
