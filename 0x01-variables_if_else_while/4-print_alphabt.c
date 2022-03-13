#include <stdio.h>
/*
 * main - Print alphabet except q and e
 *
 * Return - 0
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');
	return (0);
}
