#include "lists.h"

/**
 * str_len - return length of string
 * @s: string input
 * Return: length
 */
int str_len(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
