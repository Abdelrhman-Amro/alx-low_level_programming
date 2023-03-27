#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: string to reverse
*/

void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len--)
	{
		_putchar(*(--s));
	}
	_putchar('\n');
}
