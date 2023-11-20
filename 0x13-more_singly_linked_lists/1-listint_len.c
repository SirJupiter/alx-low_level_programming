#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head pointer pointing to first node
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t node_number = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		node_number++;
		ptr = ptr->next;
	}
	return (node_number);
}
