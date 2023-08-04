#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_bits, i;
	unsigned int count = 0;
	unsigned long int exclusive = n ^ m;

	num_bits = sizeof(unsigned long int) * 8;

	for (i = 0; i < num_bits; i++)
	{
		if ((exclusive >> i) & 1)
		{
			count++;
		}
	}

	return (count);
}

