#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: String input
 * @accept: String input
 * Return: The number of bytes 
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
			{
				return (i);
			}
		}
	}
	return (i);
}
