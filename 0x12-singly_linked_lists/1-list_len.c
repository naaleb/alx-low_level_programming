#include "lists.h"

/**
 * list_len - Get the number of elements in a list_t linked list
 * @h: Pointer to the head of the linked list
 * Return: The number of nodes in the linked list
 *
 * Description:
 * This function counts the number of nodes.
 * It returns total count, representing the number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

