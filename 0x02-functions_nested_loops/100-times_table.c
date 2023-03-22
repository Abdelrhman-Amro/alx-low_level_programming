#include "main.h"

/**
 *print_times_table - tables
 *
 *@n: number of tables
*/

void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; n <= 15 && n >= 0 && i <= n; i++)
	{
		_putchar('0');
		x = 0;

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			x += i;
			if (x > 99)
			{
				_putchar(x / 100 + '0');
				_putchar((x / 10) % 10 + '0');
			}
			else if (x > 9)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
				_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
