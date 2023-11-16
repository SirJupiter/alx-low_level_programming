#include "lists.h"

/**
 * list_len - returns number of elements in linked list
 * @h: head pointer to list
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t _num = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		_num++;
		ptr = ptr->next;
	}
	return (_num);
}
