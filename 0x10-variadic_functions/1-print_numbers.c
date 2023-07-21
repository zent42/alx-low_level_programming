#include <stdarg.h>
#include <stdio.h>
/**
* custom_print_numbers - prints numbers given as parameters
* @separator: string to be printed between numbers
* @num_values: number of integers passed to the function
*/
void custom_print_numbers(const char *separator, const unsigned int num_values, ...)
{
unsigned int i;
va_list args;

va_start(args, num_values);

for (i = 0; i < num_values; i++)
{
if (!separator)
printf("%d", va_arg(args, int));
else if (separator && i == 0)
printf("%d", va_arg(args, int));
else
printf("%s%d", separator, va_arg(args, int));
}

va_end(args);

printf("\n");
}

