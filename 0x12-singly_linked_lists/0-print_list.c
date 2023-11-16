#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: head pointer
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t count = 0;

	if (!h)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		count++;
	}
return (count);
}
