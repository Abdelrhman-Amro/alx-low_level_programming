#include "main.h"

/**
 * print_binary - print from decimal to binary
 * @n: number to print
*/
void print_binary(unsigned long int n)
{
	int nbits = sizeof(n) * 8, i = 0, bit, flag = 0;
	unsigned long int shift = 1;

	if (!n)
	{
		_putchar('0');
		return;
	}
	while (i < nbits)
	{
		bit = ((n & (shift << (nbits - 1))) != 0);
		if (bit || flag)
		{
			_putchar(bit + '0');
			flag = 1;
		}
		n = (n << 1);
		i++;
	}
}
