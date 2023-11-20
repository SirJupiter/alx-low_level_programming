#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer pointing to the head pointer
 * @idx: index of the list where new node should be added
 * @n: data to be stored in n part of node
 *
 * Return: address of the new node added
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *insert, *traverser;

	if (head == NULL)
		return (NULL);

	insert = malloc(sizeof(listint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;

	if (idx == 0)
	{
		insert->next = (*head);
		*head = insert;
		return (insert);
	}

	traverser = *head;

	for (i = 0; traverser && i < idx - 1; i++)
		traverser = traverser->next;
	insert->next = traverser->next;
	traverser->next = insert;

	return (insert);
}
