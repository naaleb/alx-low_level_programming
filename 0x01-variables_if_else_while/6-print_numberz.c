#include <stdio.h>
#include <stdlib.h>
/**
  *main - program starts here
  *Description: prints base 10
  *Return: Always 0 (Successful)
  */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar(n + '0');
}
	putchar('\n');

	return (0);
}
