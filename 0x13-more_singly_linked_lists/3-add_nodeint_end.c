#include "lists.h"

/**
 * add_nodeint_end - Nodes to be added  at the finish line of each linked list
 * @head: The first element to be pointed
 * @n: Insert data in the new element
 *
 * Return: New node pointer,
 * Or if it proves wrong return Null
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);

}
