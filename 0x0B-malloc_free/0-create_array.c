#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * create_array - array of chars, and initializes it with a specific char
  * @size: array size.
  * @c: Character to initialized with array
  *
  * Return: A pointer to the array, or NULL if fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
