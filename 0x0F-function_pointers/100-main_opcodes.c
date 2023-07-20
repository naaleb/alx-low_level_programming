/**
  *File: main.c
  *Author: Hermas
  *
  *Description:program that prints the opcodes of its own main function
  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_opcodes - Prints the opcodes of a given function.
 * @byte: Number of bytes to print from function
 *
 * Description:
 * The program takes an input integer 'bytes'
 * and prints the opcodes of its own main function
 *
 * Return: Nothing
 */
void print_opcodes(int bytes)
{
	int i;

	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", ptr[i]);
	}
	printf("\n");
}
/**
 *main - program starting point
 *@argc: Number of arguments
 *@argv: Array of arguments
 *
 *Return: 0 on success, 1 on incorrect argument and 0 if byte is negative
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(bytes);

	return (0);

}
