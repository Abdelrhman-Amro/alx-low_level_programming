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
		for (j = 1; j < i; j++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}

	if (i < 1)
		_putchar('\n');
}
