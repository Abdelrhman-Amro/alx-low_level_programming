#include "variadic_functions.h"

/**
 * print_numbers - print numbers with sparator
 * @separator: separator to print between numbers
 * @n: number of vars to print
 * @...: numbers to print
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, sz = n;

	va_start(args, n);
	printf("%d", va_arg(args, int));
	if (separator == NULL)
	{
		for (i = 1; i < sz; i++)
			printf("%d", va_arg(args, int));
	}
	else
	{
		for (i = 1; i < sz; i++)
			printf("%s%d", separator, va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
