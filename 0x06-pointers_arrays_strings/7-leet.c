#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @n: String input
 * Return: Capitalized
 */
char *leet(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == 'a' || n[i] == 'A')
		{
			n[i] = 52;
		}
		else if (n[i] == 'e' || n[i] == 'E')
		{
			n[i] = 51;
		}
		else if (n[i] == 'o' || n[i] == 'O')
		{
			n[i] = 48;
		}
		else if (n[i] == 't' || n[i] == 'T')
		{
			n[i] = 55;
		}
		else if (n[i] == 'l' || n[i] == 'L')
		{
			n[i] = 49;
		}
	}
	return (n);
}
