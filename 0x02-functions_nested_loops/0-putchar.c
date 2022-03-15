#include "main.h"

/**
 * main - print the string _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[10] = "_puthchar\0";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
