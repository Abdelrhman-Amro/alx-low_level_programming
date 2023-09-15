#include "main.h"

/**
 * print_number - print
 * @n: number
*/
void print_number(int n)
{
	int power , i, x;

	power = 1;
	for (i = 0; (n / power > 9) || (n / power < -9); i++)
		power *= 10;
	if (n < 0)
		_putchar('-');
	while (power)
	{
		x = (n / power) % 10;
		if (n < 0)
			x *= -1;
		x += 48;
		_putchar(x);
		power /= 10;
	}
}
