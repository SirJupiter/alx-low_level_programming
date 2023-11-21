#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a list
 * @h: pointer pointing to the head pointer
 *
 * Return: size of the list that was free'd
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size_of_free = 0;
	listint_t *traverser;
	int compare;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		compare = *h - (*h)->next;

		if (compare > 0)
		{
			traverser = (*h)->next;
			free(*h);
			*h = traverser;
			size_of_free++;
		} else
		{
			free(*h);
			*h = NULL;
			size_of_free++;
			break;
		}
	}

	*h = NULL;
	return (size_of_free);
}
