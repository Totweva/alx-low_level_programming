#include "lists.h"

/**
 * sum_dlistint - the sum of the list values
 * @head: pointer to the head of the list
 * Return: if the list is empty return zero
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
