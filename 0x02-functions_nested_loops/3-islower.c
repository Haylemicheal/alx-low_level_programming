#include "main.h"

/**
 * _islower - checks for lower case chars
 *@c: character parameteir
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
