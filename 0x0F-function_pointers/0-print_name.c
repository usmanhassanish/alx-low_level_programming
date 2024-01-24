#include "function_pointers.h"
/**
 * print_name - prints a string
 * @name: name to print
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
