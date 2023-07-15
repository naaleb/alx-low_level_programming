#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes
 *
 * Return: Pointer to the allocated memory
 *         If nmemb or size is 0, returns NULL
 *         If malloc fails, returns NULL
 *         The memory is set to zero
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totalSize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalSize = nmemb * size;

	ptr = malloc(totalSize);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, totalSize);

	return (ptr);
}

