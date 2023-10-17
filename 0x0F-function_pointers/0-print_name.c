#include "function_pointers.h"

/**
 * print_name - print name function
 * @name: name to print
 * @f: function to use
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
