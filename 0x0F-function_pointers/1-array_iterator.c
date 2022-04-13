#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates an array
 * @array: array input
 * @size: Size of an array
 * @action: Function pointer with int arg
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
