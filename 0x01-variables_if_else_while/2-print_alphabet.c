#include <stdio.h>
/**
 * main - Print alphabet, followed by newline
 * Always return (0)
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
