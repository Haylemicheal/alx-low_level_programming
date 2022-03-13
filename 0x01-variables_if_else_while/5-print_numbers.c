#include <stdio.h>

/**
 * main: main function
 * Description: Print out numbers from 0 to 10, then followed by newline
 * Return: 0
 */
int main(void)
{	
	int i = 0;

	for (i = 0; i < 10; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
