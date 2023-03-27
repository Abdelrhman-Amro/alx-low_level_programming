#include "main.h"

/**
 * puts_half - print second half
 *
 * @str: string to print
*/

void puts_half(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}

	int i;

	for (i = 1; i <= len / 2; i++)
		str--;
	for (i = 1; i <= len / 2; i++)
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
