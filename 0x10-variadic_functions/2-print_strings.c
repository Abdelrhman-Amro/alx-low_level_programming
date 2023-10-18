#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 * @separator: separator to print between strings
 * @n: number of strings to print
 * @...: strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i, sz = n;
	char *str;

	if (!n)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, n);
	str = va_arg(args, char *);
	if (!str)
		printf("(nil)");
	else
		printf("%s", str);
	if (separator == NULL)
	{
		for (i = 1; i < sz; i++)
		{
			str = va_arg(args, char *);
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	else
	{
		for (i = 1; i < sz; i++)
		{
			str = va_arg(args, char *);
			if (!str)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, str);
		}
	}
	printf("\n");
	va_end(args);
}
