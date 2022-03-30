#include "main.h"

/**
 * find_sqrt - finds if a number has a sqrt
 * @s: A number to be checked if it is a sqrt
 * @n: The number
 * Return: sqrt or -1
 */
int find_sqrt(int s, int n)
{
	if (s * s == n)
	{
		return (s);
	}
	if (s * s > n)
	{
		return (-1);
	}
	return (find_sqrt(s + 1, n));
}

/**
 * _sqrt_recursion - Return the natural square root of a number
 * @n: Number input
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (find_sqrt(1, n));
}
