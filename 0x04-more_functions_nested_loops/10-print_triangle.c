#include "main.h"

/**
 * print_triangle - print triangle
 * @size: size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(32);
		}
		for (k = 0; k < i + 1; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
