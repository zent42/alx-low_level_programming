#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function to print a name using a specific printing function
 * @name:the name to printed
 * @f: A pointer to the printing function that will be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
