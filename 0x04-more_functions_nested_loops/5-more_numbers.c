#include "main.h"

/**
 * more_numbers - print number from 0 to 14
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;
	int n = 0;

	for (j = 0; j < 10; j++)
	{
		n = 0;
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(49);
				n = 10;
			}
			_putchar(48 - n + i);
		}
		_putchar('\n');
	}
}
