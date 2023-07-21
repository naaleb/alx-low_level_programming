#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that Prints string, followed by a new line.
 * @separator: the string to be printed between strings
 * @n: Number of strings passed to the function
 *
 * @...: Variable number of strings to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nill)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
