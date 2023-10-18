#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 * @separator: separator to print between strings
 * @n: number of strings to print
 * @...: strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

}

 
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
