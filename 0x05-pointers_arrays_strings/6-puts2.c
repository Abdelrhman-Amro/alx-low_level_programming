#include "main.h"

/**
 * puts2 - print one and one no
 *
 * @str: string
*/

void puts2(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		if (cnt % 2 == 0)
			_putchar(*str);
		str++;
		cnt++;
	}
	_putchar('\n');
}
