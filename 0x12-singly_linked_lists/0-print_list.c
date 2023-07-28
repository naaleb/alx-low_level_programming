#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: Pointer to the linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t all_element;

	all_element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		all_element++;
	}
	return (all_element);
}
