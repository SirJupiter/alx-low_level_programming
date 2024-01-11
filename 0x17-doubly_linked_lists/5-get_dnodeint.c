#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer pointing to first node of list
 * @index: index of node to be returned
 *
 * Return: the node at that index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int iterator;

	if (!head)
		return (NULL);

	iterator = 0;
	while (temp && iterator < index)
	{
		temp = temp->next;
		iterator++;
	}

	if (!temp)
		return (NULL);

	return (temp);
}
