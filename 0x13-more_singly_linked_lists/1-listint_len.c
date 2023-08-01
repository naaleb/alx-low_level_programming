#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list.
 * @h: linked list of type listint_t to traverse
 *
 * Return: The number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}

