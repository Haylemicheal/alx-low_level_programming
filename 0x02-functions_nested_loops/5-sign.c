#include "main.h"

/**
 * print_sign - Prints the sign of the number
 * @n: The number paramater
 * Return: 0, 1 , or -1 based on the sign
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
