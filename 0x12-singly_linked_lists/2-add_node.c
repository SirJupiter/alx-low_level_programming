#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to first node
 * @str: string
 *
 * Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int length = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	while (node->str[length] != '\0')
		length++;
	node->len = length;

	node->next = *head;
	*head = node;
	return (node);
}
