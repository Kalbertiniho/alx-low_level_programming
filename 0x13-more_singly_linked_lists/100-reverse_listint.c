#include "lists.h"

/**
 * reverse_listint - Linked list to be reversed
 * @head: The first node which is found in the list;
 * To be pointed
 * Return: The first node in the new list;
 * to be pointed
 *
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);

}
