#include "main.h"

/**
 * more_numbers - print number from 0 to 14
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar(49);
				_putchar(38 + i);
			}
			else
			{
				_putchar(48 + i);
			}
		}
		_putchar('\n');
	}
}
