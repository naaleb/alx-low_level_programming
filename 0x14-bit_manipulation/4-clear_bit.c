#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0.
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if the operation is successful, or -1 if out of range.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int numb_bits;

	numb_bits = sizeof(unsigned long int) * 8;

	if (index >= numb_bits)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}

