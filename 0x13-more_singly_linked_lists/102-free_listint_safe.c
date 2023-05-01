#include "lists.h"

/**
 * free_listint_safe - The linked list to be freed
 * @h: The first node in a linked list;
 * To be printed
 * Return: The number of elements
 * In the list which is totally freed
 *
 */

size_t free_listint_safe(listint_t **h)

{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);

}
