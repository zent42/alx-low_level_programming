#ifndef FUNC_H
#define FUNC_H

#include <stdlib.h>

/* Function prototype for printing a name */
void print_name(char *name, void (*f)(char *));

/* Function prototype for iterating over an array and performing an action */
void array_iterator(int *array, size_t size, void (*action)(int));

/* Function prototype for searching for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_H */

