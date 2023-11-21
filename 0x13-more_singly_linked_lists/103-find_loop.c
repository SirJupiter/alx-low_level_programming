#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: head pointer pointing to first node
 *
 * Return: address of the node where the loop starts
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head->next;

	return (node);
}
