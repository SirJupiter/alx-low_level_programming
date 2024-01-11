#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to first node of list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freer;

	if (!head)
		return;


	while (head)
	{
		freer = head;
		head = head->next;
		free(freer);
	}

	freer = NULL;
}
