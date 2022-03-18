#include "main.h"

/**
 * _isdigit - Return 1 if the param id a digit else return 0
 * @c: char param
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return 0;
}
