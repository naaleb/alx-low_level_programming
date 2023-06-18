#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
   *main - program starts here
   *Description: prints letters from z to a
   *Return: Always 0 (Successful)
   */

int main(void)
{
char l;

	for (l = 'z'; l >= 'a'; l--)
{
	putchar(l);
}
	putchar('\n');

	return (0);
}
