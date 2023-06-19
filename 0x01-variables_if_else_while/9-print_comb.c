#include <stdio.h>
/**
  *main - program starting point
  *Description: a code to prints all posible combination of a single number
  *Return: Always 0 (successful)
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	putchar(n + '0');
	if (n < 9)
{
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
