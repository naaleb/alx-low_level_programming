#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 *
 * Return: Pointer to first node in the new list (previously the last node)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *previous = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
