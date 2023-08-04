#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert to binary and print.
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	int i;
	unsigned long int numb;
	int num_bits;

	num_bits = sizeof(unsigned long int) * 8;

	for (i = num_bits - 1; i >= 0; i--)
	{
		numb = n >> i;

		if (numb & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}

	if (!count)
	{
		_putchar('0');
	}
}
