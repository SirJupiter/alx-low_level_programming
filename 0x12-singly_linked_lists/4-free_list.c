#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head
*/
void free_list(list_t *head)
{
	list_t *an_node;

	while (head != NULL)
	{
		an_node = head;
		head = head->next;
		free(an_node->str);
		free(an_node);
	}
}
