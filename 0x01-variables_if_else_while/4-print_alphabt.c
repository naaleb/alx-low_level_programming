#include <stdio.h>
/**
  *main - Program starting point
  *Description: output alphabets lowercase except q and e
  *Return: Always 0(indicating successful execution)
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
