#include "main.h"

/**
 * print_number - print number using ASCII
 *
 * @n: number to print
*/

void print_number(int n)
{
	int x, cnt;

	x = n, cnt = 1;

	while (x > 9)
	{
		cnt *= 10;
		x /= 10;
	}

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else
		x = n;

	while (cnt != 0)
	{
		_putchar((x / cnt) % 10 + '0');
		cnt /= 10;
	}
}
