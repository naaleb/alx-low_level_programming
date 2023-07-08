#include "main.h"
#include <stdio.h>
/**
  *main - prints program name
  *@argv: arry of arguments
  *@argc: argurment count
  *Return: Always 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
