#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: head pointer pointing to first node of the list
 * @n: value of n part of node
 *
 * Return: address of the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!(*head) || !head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head)
	{
		new->next = (*head);
		(*head)->prev = new;
	}
	else
		new->next = NULL;

	*head = new;

	return (new);
}
