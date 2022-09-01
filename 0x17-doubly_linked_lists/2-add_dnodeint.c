#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: pointer to a pointer to the head node in the list
 * @n: value to be received from stdin
 * Return: the address of the new element or null if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
