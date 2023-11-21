#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer pointing to the head pointer
 *
 * Return: pointer to the first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	temp1 = *head;
	temp2 = *head;
	*head = NULL;

	while (temp2 != NULL)
	{
		temp1 = temp2;
		temp2 = temp2->next;
		temp1->next = *head;
		*head = temp1;
	}

	return (*head);
}

