#ifndef VAR_FUNC_H
#define VAR_FUNC_H

#include <stdio.h>
#include <stdarg.h>

// Function to calculate the sum of all its parameters
int sum_them_all(const unsigned int n, ...);

// Function to print numbers separated by a given separator
void print_numbers(const char *separator, const unsigned int n, ...);

// Function to print strings separated by a given separator
void print_strings(const char *separator, const unsigned int n, ...);

// Function to print various types based on the format specifier
void print_all(const char * const format, ...);

#endif

