#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: head pointer pointing to first node
 *
 * Return: sum
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *traverser;

	if (head == NULL)
		return (0);

	traverser = head;
	while (traverser != NULL)
	{
		total += traverser->n;
		traverser = traverser->next;
	}

	return (total);
}
