#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of a variable number of arguments
 * @n: The number of arguments passed to the function
 *
 * Return: The resulting sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
