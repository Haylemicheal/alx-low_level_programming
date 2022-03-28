#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: String input
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		}
		_putchar('\n');
	}
}
