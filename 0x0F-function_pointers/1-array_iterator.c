#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Applies a function to each element in an integer array
 * on each element of an array
 * @array: Applies a function to each element in an integer array
 * @size: The size of the array
 * @action: A pointer to the function to be applied to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
