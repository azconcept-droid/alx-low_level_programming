#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print name to standard output
 * @name: name to print
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	else
		f(name);
}
