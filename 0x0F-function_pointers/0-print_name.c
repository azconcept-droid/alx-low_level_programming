#include "function_pointers.h"
/**
 * print_name - print name to standard output
 * @name: name to print
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
