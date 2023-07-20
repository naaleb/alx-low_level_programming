#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to a name to be printed
  * @f: function pointer
  *
  * This function takes a name and a function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

