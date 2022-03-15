#include <stdio.h>
/**
 * main - Print alphabet in reverse, followed by newline
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
