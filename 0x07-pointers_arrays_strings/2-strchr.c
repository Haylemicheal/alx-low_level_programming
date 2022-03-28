#include "main.h"

/**
 * _strchr - Locates a character in string
 * @s: String input
 * @c: Char input
 * Return: The occurance of the char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
