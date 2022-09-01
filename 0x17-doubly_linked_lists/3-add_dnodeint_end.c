#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of the list
 * @head: a pointer to a pointer of the head to the list
 * @n: the value of the new node from stdin
 * Return: the address of the new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	last = *head;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	new->prev = last;

	return (new);
}
