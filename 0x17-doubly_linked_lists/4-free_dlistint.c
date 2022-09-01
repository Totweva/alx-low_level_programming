#include "lists.h"

/**
 * free_dlistint_t - frees allocated space
 * @head: point to the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
