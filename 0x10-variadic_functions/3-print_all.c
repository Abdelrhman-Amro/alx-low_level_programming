#include "variadic_functions.h"

/**
 * print_all - Prit all vars
 * @format:  list of types of arguments passed to the function
 * @...: Arguments
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, flag = 0;
	const char * const f = format;
	char *str;

	va_start(args, format);
	while (f[i])
	{
		if (flag)
			printf(", ");
		flag = 1;
		switch (f[i])
		{
			case 'i':
			printf("%d", va_arg(args, int));
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			break;
			case 'c':
			printf("%c", va_arg(args, int));
			break;
			case 's':
			str = va_arg(args, char *);
			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
			default:
			flag = 0;
			break;
		}
		i++;
	}
	printf("\n");
}
