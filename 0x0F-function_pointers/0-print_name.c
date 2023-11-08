#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: name argument
 * @f: a function pointer argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	if (name == NULL)
		return;
	(*f)(name);
}
