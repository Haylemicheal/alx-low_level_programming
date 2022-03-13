#include <stdio.h>

/**
 * main - This is main function
 * Description: Print out base 16 numbers
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 71; i++)
        {
                putchar(i);
        }
	putchar(10);
	return (0);
}
