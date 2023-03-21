#include "main.h"

/**
 * print_to_98 - from n to 98
 *
 * @n: number
*/

void print_to_98(int n)
{
	printf("%d", n);

	int Num;

	Num = 1;

	if (n > 98)
		Num = -1;

	while (n != 98)
	{
		n += Num;
		printf(", %d", n);
	}

	putchar('\n');
}
