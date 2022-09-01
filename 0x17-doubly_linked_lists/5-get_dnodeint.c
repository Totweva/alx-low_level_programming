#include "lists.h"

/**
 * get_dnodeint_at_index - get thevalue of a node at a specific index
 * @head: a pointer to the beginning of a list
 * @index: the index to get the nide at
 * Return: NULL if the node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
