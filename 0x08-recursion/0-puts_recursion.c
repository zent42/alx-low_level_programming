#include "main.h"
/**
* my_puts_recursion - custom function to print a string, followed by a new line
* @str: string to print
*/
void my_puts_recursion(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
my_puts_recursion(str + 1);
}

