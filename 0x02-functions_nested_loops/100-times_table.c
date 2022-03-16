#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Number param
 * Return: The products
 */
void print_times_table(int n)
{
	int i, j, p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == 0)
				{
					_putchar(48);
					continue;
				}
				p = i * j;
				_putchar(',');
				_putchar(' ');
				if (p >= 10 && p < 100)
				{
					_putchar(' ');
					_putchar(p / 10 + 48);
					_putchar(p % 10 + 48);
				}
				else if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar(((p % 100) / 10) + 48);
					_putchar(p % 10 + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(p + 48);
				}
			}
			_putchar('\n');
		}
	}
}

