#include "main.h"
#include <stddef.h>

/**
 * set_bit - set bit at a specified index 1
 * @n: integer input
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
