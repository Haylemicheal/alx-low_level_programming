#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatnates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: s1 + s2 or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	unsigned int i, j;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + s1_len) != '\0')
	{
		s1_len++;
	}

	while (*(s2 + s2_len) != '\0')
	{
		s2_len++;
	}

	concat = malloc(sizeof(*s1) * s1_len + sizeof(*s2) * s2_len + 1);

	if (concat == NULL)
		return ('\0');

	for (i = 0; i < s1_len; i++)
		concat[i] = *(s1 + i);

	for (j = 0; j < s2_len; j++, i++)
		concat[i] = *(s2 + j);

	return (concat);
}
