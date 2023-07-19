#include <stddef.h> /* For using size_t */

/**
* my_array_iterator - executes a function given as a parameter
* on each element of an array
* @array: array to iterate over
* @size: size of the array
* @action: pointer to function used
*/
void my_array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;

size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}


