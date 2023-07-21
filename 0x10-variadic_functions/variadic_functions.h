#ifndef VAR_FUNC_H
#define VAR_FUNC_H
#include <stdio.h>
#include <stdarg.h>
/**
* sum_varargs - Calculates the sum of all its parameters.
* @n: The number of arguments passed to the function.
*
* Return: The resulting sum.
*/
int sum_varargs(const unsigned int n, ...);

/**
* print_numbers_varargs - Prints numbers separated by a given separator.
* @separator: The separator string.
* @n: The number of arguments passed to the function.
*/
void print_numbers_varargs(const char *separator, const unsigned int n, ...);

/**
* print_strings_varargs - Prints strings separated by a given separator.
* @separator: The separator string.
* @n: The number of arguments passed to the function.
*/
void print_strings_varargs(const char *separator, const unsigned int n, ...);

/**
* print_all_varargs - Prints various types based on the format specifier.
* @format: The format string.
* ...: Additional arguments depending on the format specifier.
*/
void print_all_varargs(const char * const format, ...);

#endif

