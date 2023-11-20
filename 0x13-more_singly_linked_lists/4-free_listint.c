#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head pointer pointing to first node
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *traverser;

	while (head != NULL)
	{
		traverser = head;
		head = head->next;
		free(traverser);
	}
}
