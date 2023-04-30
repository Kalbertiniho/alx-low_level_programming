#include "lists.h"

/**
 * get_nodeint_at_index - Node of a particular index in a linked list to return
 * @head: Node that is in the first part of the linked list
 * @index: Return the node index
 *
 * Return: The desired node to be pointed,
 * Or Null if it fails
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);

}
