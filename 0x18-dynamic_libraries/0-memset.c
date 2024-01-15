#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of memory
 *
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;
	}
	return (s);
}
