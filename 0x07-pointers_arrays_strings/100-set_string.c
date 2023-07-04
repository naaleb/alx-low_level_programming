#include "main.h"
#include <stdio.h>
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be set.
 * @to: Pointer to the char value to set.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
