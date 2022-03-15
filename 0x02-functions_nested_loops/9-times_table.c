#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: The products
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			p = i * j;
			_putchar(',');
			_putchar(' ');
			if (p >= 10)
			{
				_putchar(p / 10 + 48);
				_putchar(p % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(p + 48);
			}
		}
		_putchar('\n');
	}
}
