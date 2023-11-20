#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a list
 * @h: head pointer pointing to first node
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t node_number = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		node_number++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (node_number);
}
