#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer holding address of head pointer
 * @n: value of n part of node
 *
 * Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *traverser;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	} else
	{
		traverser = *head;
		while (traverser->next != NULL)
			traverser = traverser->next;
		traverser->next = new;
		new->next = NULL;
	}
	return (new);
}
