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

	while (x > 9 || x < -9)
	{
		cnt *= 10;
		x /= 10;
	}

	x = n;
	if (x == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		x = 147483648;
		cnt /= 10;
	}
	if (x < 0)
	{
		_putchar('-');
		cnt = -cnt;
	}

	while (cnt != 0)
	{
		_putchar((x / cnt) % 10 + '0');
		cnt /= 10;
	}
}
