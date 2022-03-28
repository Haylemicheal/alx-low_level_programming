#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the diagonal
 * @a: matrix
 * @size: size of the matrix
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1 = 0;
	int d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		d2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", d1);
	printf("%d\n", d2);
}
