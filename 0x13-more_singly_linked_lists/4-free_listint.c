#include "lists.h"

/**
 * free_listint - Linked list to be freed
 * @head: Free the Listint_t list
 *
 */

void free_listint(listint_t *head)

{
	listint_t *temp;

	while (head)

	{
		temp = head->next;
		free(head);
		head = temp;

	}

}
