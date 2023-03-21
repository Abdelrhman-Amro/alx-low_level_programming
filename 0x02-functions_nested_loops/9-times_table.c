#include "main.h"

/**
 *times_table - table format
 *
 * Return: no return
*/

void times_table(void)
{
	int i, j, x, y;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		y = 0, x = -16;

		for (j = 1; ; j++)
		{
			y += i;
			if (y > 9)
			{
				y -= 10;
				if (x < 0)
					x = 0;
				x++;
			}
			if (j == 9)
				break;

			_putchar(x + '0');
			_putchar(y + '0');
			_putchar(',');
			_putchar(' ');
		}
			_putchar(x + '0');
			_putchar(y + '0');
			_putchar('\n');

	}
}
