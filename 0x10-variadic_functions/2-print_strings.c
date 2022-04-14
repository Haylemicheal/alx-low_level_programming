#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print String
 * @separator: Separator string
 * @n: length of params
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list params;
	unsigned int i;
	char *s;

	va_start(params, n);
	for (i = 0; i < (n - 1) && n != 0; i++)
	{
		s = va_arg(params, char *);
		if (!separator)
			printf("%s", s ? s : "(nil)");
		else
			printf("%s%s", s ? s : "(nil)", separator);
	}

	if (n)
	{
		s = va_arg(params, char *);
		printf("%s\n", s ? s : "(nil)");
	}
	else
	{
		printf("\n");
	}
	va_end(params);
}
