#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - A function that searches for an integer in an array
  * @array: start of array pointer
  * @size: size of array
  * @cmp: Pointer to the function
  *
  *
  * The int_index function searches for an integer in an array
  * using a pointer to the function to compare values
  * returns the index of the first element for which the cmp function
  * does not return 0, If no element matches, return -1 and
  * If size <= 0, return -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
