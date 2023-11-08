#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to be printed
 * @f: pointer to function
*/
void print_name(char *name, void (*f)(char *))
{
	void (*name_ptr)(char *);
	name_ptr = f;
	name_ptr(name);
}
