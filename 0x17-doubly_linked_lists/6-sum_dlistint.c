#include "lists.h"

/**
 * sum_dlistint - the sum of the list values
 * @head: pointer to the head of the list
 * Return: if the list is empty return zero
 */

int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	if (head == NULL)
		return (0);

	for (i = head; i != NULL; i = i->next)
		sum += i->n;
	return (sum);
}
