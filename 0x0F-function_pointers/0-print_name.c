#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: String name input
 * @f: Function pointer argument
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
