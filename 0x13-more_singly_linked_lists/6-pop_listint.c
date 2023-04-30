#include "lists.h"

/**
 * pop_listint - Head node of a linked list to be erased
 * @head: pointer to the first element in the linked list
 *
 * Return: The erased data , Or 0 if it is Null
 *
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);

}
