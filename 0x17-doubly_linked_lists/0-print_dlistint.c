#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint list
 * @h: a pointer to the head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
