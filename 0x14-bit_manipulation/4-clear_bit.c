#include "main.h"
#include <stddef.h>

/**
 * clear_bit - sets a bit at a position to 0
 * @n: integer input:
 * @index: position to be cleared
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
