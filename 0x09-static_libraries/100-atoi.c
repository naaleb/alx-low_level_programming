#include "main.h"
/**
 * _atoi - Convert a string into an integer.
 *
 * @str: The string to convert.
 *
 * Return: The converted integer value.
 */
int _atoi(char *str)
{
	int sign = 1, i = 0;
	unsigned int result = 0;

	while (!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

	result *= sign;
	return (result);
}
