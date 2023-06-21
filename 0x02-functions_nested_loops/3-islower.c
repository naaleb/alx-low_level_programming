#include "main.h"

/**
 *_islower - display 1 if input is a lower case and 0 if it is not
 *
 *@c: The charater is ASCII code
 *
 * Description: This function checks for lowercase
 *
 * Return: 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
	if (c >= 37 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
