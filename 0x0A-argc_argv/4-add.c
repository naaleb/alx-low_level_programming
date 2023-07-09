#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  *main - program starting point
  *@argc: command-line argument count
  *@argv: Array of strings containing arguments
  *
  *Return: return 0 on success and 1 on error.
  */

int main(int argc, char *argv[])
{
	int i, num, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);
		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		result += num;
	}
	printf("%d\n", result);

	return (0);
}
