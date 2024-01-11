#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: double pointer pointing to first node of the list
 * @index: index at which a node should be deleted
 *
 * Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int iterator = 0;
	dlistint_t *temp = *head;

	if (!head || !(*head))
		return (-1);

	while (temp)
	{
		if (iterator == index)
		{
			if (temp->next && temp->prev)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp);
			}
			else if (!(temp->next) && temp->prev)
			{
				temp->prev->next = NULL;
				free(temp);
			}
			else if (temp->next && !(temp->prev))
			{
				temp->next->prev = NULL;
				*head = temp->next;
				free(temp);
			}
			else
			{
				free(temp);
				*head = NULL;
				return (-1);
			}
		}
		temp = temp->next;
		iterator++;
	}

	return (1);
}
