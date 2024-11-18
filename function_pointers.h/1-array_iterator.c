#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - pointer array
 * @array: the array
 * @size: the size of array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
