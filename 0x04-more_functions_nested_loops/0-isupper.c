#include "main.h"

/**
 * _isupper - return 1 for uppercase letters or 0 for lower case letters
 * @c: int param
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}
