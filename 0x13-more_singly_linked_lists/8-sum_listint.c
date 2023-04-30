#include "lists.h"

/**
 * sum_listint - The sum of all the data in a listint_t list to be calculated
 * @head: Node that appears on the first position in the linked list
 *
 * Return: Net sum
 *
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
