#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to first node of the list
 * @idx: index at which node should be inserted
 * @n: value of n part of node
 *
 * Return: node at that index
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insert, *temp = *h;
	unsigned int iterator = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	insert = malloc(sizeof(dlistint_t));
	if (!insert)
		return (NULL);

	insert->n = n;

	while (temp && iterator < idx)
	{
		temp = temp->next;
		iterator++;
	}

	if (temp)
	{
		insert->next = temp;
		insert->prev = temp->prev;
		temp->prev->next = insert;
		temp->prev = insert;
	}
	else
		return (NULL);

	return (insert);
}
