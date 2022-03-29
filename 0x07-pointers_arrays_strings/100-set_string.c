#include "main.h"

/**
 * set_string - Sets the value of a pointer ro a char
 * @s: pointer of pointer param
 * @to: pointer to a char
 * Return: none
 */
void set_string(char **s, char *to)
{
	*s = to;
}
