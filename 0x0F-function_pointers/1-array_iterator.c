#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function as a parameter on array element
  * @array: Pointer to array
  * @size: array size
  * @action: pointer to function to execute
  *
  * This function takes int array, array size and function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
