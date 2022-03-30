#include "main.h"

/**
 * check_prime - find for a divider
 * @s: divider
 * @n: number to be checked
 * Return: 0 or 1
 */
int check_prime(int s, int n)
{
	if (n % s == 0)
	{
		return (0);
	}
	else if (s > n / 2)
	{
		return (1);
	}
	return (check_prime(s + 1, n));
}

/**
 * is_prime_number - check a number is prime
 * @n: Number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (check_prime(2, n));
}
