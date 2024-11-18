#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - index return
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: i or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]))
			return (i);
	}

return (-1);
}
