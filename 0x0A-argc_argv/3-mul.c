#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *main - Multiply two numbers
  *@argc: Arguments count
  *@argv: Array of argument from command line
  *
  *Return: Returns 0 success , 1 on error.
  */
int main(int argc, char *argv[])
{
	int num_1, num_2, result;


	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);
	result = num_1 * num_2;

	printf("%d\n", result);

	return (0);

}
