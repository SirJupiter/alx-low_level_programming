#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 * @format: list of types of argument
*/
void print_all(const char * const format, ...)
{
	int i;
	char *str, *separator = "";
	va_list words;

	va_start(words, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(words, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(words, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(words, double));
					break;
				case 's':
					str = va_arg(words, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	va_end(words);
	printf("\n");
}
