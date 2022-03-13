#include <stdio.h>

/**
 * main - This is main function
 * Description: Print out 0-9 in putchar
 * Return: 0
 */
int main(void)
{
	int i;
	for(i = 48; i<=57; i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
