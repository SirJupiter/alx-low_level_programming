#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer pointing to the head pointer
 *
 * Return: the head node's data (n)
*/
int pop_listint(listint_t **head)
{
	listint_t *traverser;
	int data;

	if (*head == NULL)
		return (0);
	traverser = *head;
	data = traverser->n;
	*head = traverser->next;

	free(traverser);
	traverser = NULL;
	return (data);
}
