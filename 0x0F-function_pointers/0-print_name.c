#include <stdlib.h>
#include "function_pointers.h"

/**
* display_name - displays a name
* @name: name to display
* @display_func: pointer to the display function
*
* Description: This function displays a name using a given display function.
*/
void display_name(char *name, void (*display_func)(char *))
{
if (!name || !display_func)
return;

display_func(name);
}

