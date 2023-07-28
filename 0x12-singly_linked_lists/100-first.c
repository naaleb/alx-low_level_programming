#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
 * print_before_main - Execute before main function.
 * return: No return
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
