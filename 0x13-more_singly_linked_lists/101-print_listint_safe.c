#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list
 * @head: head pointer pointing to first node
 *
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes = 0;
	/*const listint_t *store;*/

	if (head == NULL)
		exit(98);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		number_of_nodes++;

		if (head->next == NULL)
			break;

		if (head->n == 98)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		head = head->next;
	}

	return (number_of_nodes);
}
