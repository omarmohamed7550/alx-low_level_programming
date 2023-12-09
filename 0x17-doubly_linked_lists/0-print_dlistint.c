#include "lists.h"

/**
 * print_dlistint - prints all the elements of
 * dlistint_t list
 *
 * @x: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *x)
{
	int count;

	count = 0;

	if (x == NULL)
		return (count);

	while (x->prev != NULL)
		x = x->prev;

	while (x != NULL)
	{
		printf("%d\n", h->n);
		count++;
		x = x->next;
	}

	return (count);
}

