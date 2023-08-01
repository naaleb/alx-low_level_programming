#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: Pointer to the pointer of the head node of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}

