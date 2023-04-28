#include "lists.h"

/**
 * print_listint - all elements of the linked list to be printed
 * @h: print linked list of
 * type listint_t
 *
 * Return: the number of nodes in thhe list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
