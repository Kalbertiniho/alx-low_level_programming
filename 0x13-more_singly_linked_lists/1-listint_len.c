#include "lists.h"

/**
 * listint_len - Number of elements to be returned in linked lists
 * @h: Traverse the linked list of type listint_t
 *
 * Return: Number of nodes which becomes success
 *
 */

size_t listint_len(const listint_t *h)

{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);

}
