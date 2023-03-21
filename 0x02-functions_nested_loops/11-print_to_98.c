#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - from n to 98
 *
 * @n: number
 *
 * Return: none
*/

void print_to_98(int n)
{
	printf("%d", n);

	int x;

	x = 1;

	if (n > 98)
		x = -1;
	while (n != 98)
	{
	n += x;
	printf(", %d", n);
	}
	putchar('\n');
}
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}   
