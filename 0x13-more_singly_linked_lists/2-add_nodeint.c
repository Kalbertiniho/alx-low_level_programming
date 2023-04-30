#include "lists.h"

/**
 * add_nodeint - New node to be added ;
 * At the start of the linked list
 * @head: List for the first node pointer
 * @n: Insert data inside of the new node
 *
 * Return: Pointer to new node,
 * or NULL if it declines
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
