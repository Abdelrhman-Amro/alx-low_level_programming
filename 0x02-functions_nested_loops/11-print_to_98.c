#include "main.h"

/**
 *print_to_98 - from n to 98
 *
 *@n: number
*/

void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x != 98; x++)
			printf("%d, ", x);
	}
	else
	{
		for (x = n; x != 98; x--)
			printf("%d, ", x);
	}
	printf("%d", x);
	putchar('\n');
}
