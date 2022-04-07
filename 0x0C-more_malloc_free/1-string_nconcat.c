#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatnates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: n chars of s2
 * Return: concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y = 0, i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
		return (NULL);

	for (x = 0; x < i; x++)
		s3[y++] = s1[x];
	for (x = 0; x < j; x++)
		s3[y++] = s2[x];

	s3[y] = '\0';
	return (s3);
}

