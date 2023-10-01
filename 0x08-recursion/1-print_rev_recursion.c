#include "main.h"
/**
* my_print_rev_recursion - prints a string in reverse
* @str: the string to print in reverse
*/
void my_print_rev_recursion(char *str)
{
if (*str)
{
my_print_rev_recursion(str + 1);
_putchar(*str);
}
}

