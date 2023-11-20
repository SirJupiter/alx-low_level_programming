#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer containing address of head pointer
 * @n: value of n part of node
 *
 * Return: address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new, *traverser;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	} else
	{
		traverser = *head;
		new->next = traverser;
		*head = new;
	}
	return (new);
}
