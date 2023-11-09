#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function prints strings
 * @separator: string to be printed between strings
 * @n: number of arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list words;
	char *str;

	va_start(words, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(words, char *);
		printf("%s", str == NULL ? "(nil)" : str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(words);
	printf("\n");
}
