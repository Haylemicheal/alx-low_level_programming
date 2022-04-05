#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space
 * @str: String input
 * Return: pointer of a new string which is duplicate to str
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
	{
		return ('\0');
	}

	while (*(str + len) != '\0')
	{
		len++;
	}
	len++;

	copy = malloc(sizeof(*str) * len);

	if (copy == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < len; i++)
	{
		copy[i] = *(str + i);
	}

	copy[i] = '\0';

	return (copy);
}

