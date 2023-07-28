#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees the memory occupied by a list_t list.
 * @head: Pointer to the head of the linked list.
 *
 * This function frees the memory
 * occupied by each node and associated string.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;

		free(temp->str);
		free(temp);
	}
}
