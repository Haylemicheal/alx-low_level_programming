#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: Separator string
 * @n: length of params
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	int num;

	va_start(params, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		num = va_arg(params, int);
		if (!separator)
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}

	if (n)
	{
		num = va_arg(params, int);
		printf("%d\n", num);
	}
	else
	{
		printf("\n");
	}
	va_end(params);
}
