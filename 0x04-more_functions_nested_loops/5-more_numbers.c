#include "main.h"

/**
 * more_numbers - print from 0 to 14
 *		from 0 to 14
 *		print that
*/

void more_numbers(void)
{
	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}

		for (j = 10; j <= 14; j++)
		{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}

		_putchar('\n');
	}
}