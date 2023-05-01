#include "lists.h"

/**
 * find_listint_loop - It finds loop
 * In a linked list
 * @head: Linked list for searching
 * Return: Address of the node address
 * Where the loop begins,
 * Or NULL
 *
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *slow = head;
	listint_t *fast = head;

	if (!head)
		return (NULL);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}

	return (NULL);

}
