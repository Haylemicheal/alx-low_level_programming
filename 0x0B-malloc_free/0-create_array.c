#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars
 * @size: size of an array
 * @c: char input
 * Return: char array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}
	arr = malloc(size);

	if (arr == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	arr[size] = '\0';

	return (arr);
}
