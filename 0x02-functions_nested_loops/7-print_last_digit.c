#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @n: Number param
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n >= 0 ? n : (n + 1) * -1;
	if (n < 0)
	{
		_putchar(49 + (i % 10));
		return ((i % 10) + 1);
	}
	_putchar(48 + i % 10);
	return (i % 10);
}
