#include "main.h"

/**
 * print_diagonal - print \ shape
 *
 * @n: number of lines
*/

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		j = i;
		while (j-- != 1)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}

	if (i < 1)
		_putchar('\n');
}
