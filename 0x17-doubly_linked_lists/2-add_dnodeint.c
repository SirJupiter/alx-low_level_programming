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

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->n = n;

	if (*head)
	{
		while ((*head)->prev)
			*head = (*head)->prev;
		(*head)->prev = new;
	}
	new->next = (*head);

	*head = new;

	return (new);
}
