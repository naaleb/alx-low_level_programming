#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters
  * @n: Number of argument passed to the function
  * @...: Variable number of argument to be summed
  *
  * Return: The sum of parameters, if n is 0, return 0.
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum = sum + value;
	}

	va_end(args);

	return (sum);
}
