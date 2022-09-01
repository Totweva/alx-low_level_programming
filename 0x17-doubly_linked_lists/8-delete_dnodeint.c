#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a double
 * linked list.
 * @head: Double pointer to the head of the double linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 on success, or -1 upon failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			if (current->next != NULL)
				current->next->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = current->next;
			free(current);
			return (1);
		}
		current = current->next;
	}
	return (-1);
}
