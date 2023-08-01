#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list of integers.
 * @head: Pointer to the head node of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: return NULL, if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

