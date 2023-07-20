#include <stdarg.h>
/**
* add_numbers - calculates the sum of all its parameters
* @num_args: number of arguments passed to the function
*
* Return: the resulting sum
*/
int add_numbers(const unsigned int num_args, ...)
{
unsigned int i;
int sum = 0;
va_list args_list;

va_start(args_list, num_args);

for (i = 0; i < num_args; i++)
sum += va_arg(args_list, int);

va_end(args_list);

return (sum);
}

