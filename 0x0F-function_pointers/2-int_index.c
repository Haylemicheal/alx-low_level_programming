#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for int
 * @array: array input
 * @size: size of array
 * @cmp: compares intigers
 * Return: 0, index, or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
