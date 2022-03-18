#include "main.h"

/**
 * print_square - print a square of #
 * @size: size of the square
 * Return: none
 */
void print_square(int size)
{
	int j;
	int i;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
