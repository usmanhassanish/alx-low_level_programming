#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name argument
 * @f: a function pointer argument
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
