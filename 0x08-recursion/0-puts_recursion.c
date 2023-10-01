#include "main.h"
/**
 * printStringRecursively - prints a string, followed by a new line
 * @str: string to print
 */
void printStringRecursively(char *str)
{
if (*str == '\0')
{
_putchar('\n');
return;
}
_putchar(*str);
printStringRecursively(str + 1);
}

