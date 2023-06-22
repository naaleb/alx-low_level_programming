#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input integer as an input
 *
 * Return: The last digit
 */
int print_last_digit(int n)

{
	int last_digit = n % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
