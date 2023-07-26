#include "main.h"

/**
 * argstostr - A function to concatenates all arguments of a program.
 *
 * @ac: Argument count
 * @av: Strings array containing arguments.
 *
 * Return: Pointer a new string containing concatenated arguments,
 *         or av == NULL or NULL if ac == 0.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated_str;
	int i, j, k = 0;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated_str = (char *)malloc((total_length + 1) * sizeof(char));

	if (concatenated_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated_str[k++] = av[i][j];
		}
		concatenated_str[k++] = '\n';
	}

	concatenated_str[k] = '\0';

	return (concatenated_str);
}
