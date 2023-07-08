#include "main.h"
#include <stdio.h>

/**
  *main - Print all arguments received by the program
  *@argc: Argument count
  *@argv: Array of arguments
  *
  *Return: Always 0
  */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
