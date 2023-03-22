#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - from n to 98
 *
 *@n: number
*/

void print_to_98(int n)
{
	printf("%d", n);

	int x;

	if (n > 98)
		x = -1;
	else
		x = 1;

	while (n != 98)
	{
		n += x;
		printf(", %d", n);
	}

	putchar('\n');
}
