#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function frees a list
 * @head: pointer pointing to the head pointer
*/
void free_listint2(listint_t **head)
{
	listint_t *traverser;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		traverser = *head;
		*head = (*head)->next;
		free(traverser);
	}
	*head = NULL;
}
