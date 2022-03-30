#include "main.h"

/**
 * _puts_recursion - Prints a string in recursion
 * @s: String input
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
