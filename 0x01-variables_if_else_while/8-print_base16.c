#include <stdio.h>
#include <stdlib.h>
/**
   *main - program starts here
   *Description: prints base 16
   *Return: Always 0 (Successful)
   */

int main(void)
{
	int hd;

	for (hd = 0; hd <= 15; hd++)
{
	if (hd < 10)
{


	putchar(hd + '0');
}	else
{

	putchar(hd - 10 + 'a');
}
}
	putchar('\n');

	return (0);
}
