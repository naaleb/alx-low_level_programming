#include "main.h"
#include <stddef.h>
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 * Return: A pointer to the modified string.
 */

char *cap_string(char *str)
{
	int i = 0;
	int capitalizedNext = 1;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalizedNext = 1;
		}
		else if (capitalizedNext && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			capitalizedNext = 0;
		}
		else
		{
			str[i] = tolower(str[i]);
		}

		i++;
	}

	return (str);
}
