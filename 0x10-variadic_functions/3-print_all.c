#include "variadic_functions.h"

/**
 * PRINT - print vars
 * @args: arguments
 * @f: format
*/
void PRINT(va_list args, const char * const f)
{
	int i = 0, flag = 0;
	char *str;

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
			switch ((int) (!str))
			{
				case 1:
				printf("(nil)");
				break;
				default:
				printf("%s", str);
				break;
			}
			break;
			default:
			flag = 0;
			break;
		}
		i++;
	}
}
/**
 * print_all - Prit all vars
 * @format:  list of types of arguments passed to the function
 * @...: Arguments
*/
void print_all(const char * const format, ...)
{
	va_list args;

	if (!format)
	{
		printf("\n");
		exit(0);
	}
	va_start(args, format);
	PRINT(args, format);
	printf("\n");
	va_end(args);
}
