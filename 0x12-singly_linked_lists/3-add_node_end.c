#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds new node at end of a list
 * @head: pointer containing address of head pointer
 * @str: string to be copied in str part of node
 *
 * Return: new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *n_node;
	int _length = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (new_node->str[_length] != '\0')
		_length++;
	new_node->len = _length;

	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		n_node = *head;
		while (n_node->next != NULL)
			n_node = n_node->next;
		n_node->next = new_node;
	}
	return (new_node);
}
