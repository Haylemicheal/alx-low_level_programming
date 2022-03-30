#include "main.h"

/**
 * _print_rev_recursion - Prints a string in recursion
 * @s: String input
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

