#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer pointing to the head pointer
 * @index: index of the node that should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	current = *head;
	prev = *head;

	if (current == NULL)
		return (-1);

	if (index == 0 && current != NULL)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	} else if (index > 0 && current != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (!current->next)
				return (-1);
			prev = current;
			current = current->next;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
		return (1);
	}
	return (1);
}
