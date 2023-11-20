#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head pointer pointing to first node
 * @index: index of node needed
 *
 * Return: the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverser;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	traverser = head;
	for (i = 0; traverser && i < index; i++)
	{
		traverser = traverser->next;
	}
	return (traverser ? traverser : NULL);
}
