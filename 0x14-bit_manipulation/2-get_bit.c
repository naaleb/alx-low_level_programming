#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to get bit
 * @index: index of the bit, from 0.
 *
 * Return: The value of bit at a specified index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitValue;

	if (index > 63)
		return (-1);

	bitValue = (n >> index) & 1;

	return (bitValue);
}
