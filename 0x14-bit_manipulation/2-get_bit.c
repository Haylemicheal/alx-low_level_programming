i#include "main.h"

/**
 * get_bit - Get bit at specified index
 * @n: integer input
 * @index: index
 * Return: 1 or -1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
