#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * do_loop_listint_safe - counts nodes in a linked list
 * @head: head pointer pointing to first node
 *
 * Return: number of unique nodes
*/
size_t do_loop_listint_safe(const listint_t *head)
{
	const listint_t *ptr_one, *ptr_two;
	size_t no_of_nodes = 1;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
		return (0);

	ptr_one = head->next;
	ptr_two = head->next->next;

	while (ptr_two)
	{
		if (ptr_one == ptr_two)
		{
			ptr_one = head;
			while (ptr_one != ptr_two)
			{
				no_of_nodes++;
				ptr_one = ptr_one->next;
				ptr_two = ptr_two->next;
			}
			ptr_one = ptr_one->next;
			while (ptr_one != ptr_two)
			{
				no_of_nodes++;
				ptr_one = ptr_one->next;
			}
			return (no_of_nodes);
		}
		ptr_one = ptr_one->next;
		ptr_two = ptr_two->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list
 * @head: head pointer pointing to first node
 *
 * Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes, _ind;

	number_of_nodes = do_loop_listint_safe(head);

	if (number_of_nodes == 0)
	{
		for (; head != NULL; number_of_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (_ind = 0; _ind < number_of_nodes; _ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);

	}

	return (number_of_nodes);
}
