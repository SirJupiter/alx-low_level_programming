#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer pointing to first node of list
 * @n: value of n part of list
 *
 * Return: address of the new element added
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	if (!new)
		return (NULL);

	new->n = n;

	if (temp == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
		new->next = NULL;
	}

	return (new);
}
