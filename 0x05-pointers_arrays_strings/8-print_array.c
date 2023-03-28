#include "main.h"

/**
 * print_array - print array elements
 *
 * @a: pointer to array
 * @n: size of array
*/

void print_array(int *a, int n)
{
	if (n > 0)
	{
		printf("%d", *a);
		a++;
		n--;
	}
	while (n-- != 0)
	{
		printf(", %d", *a);
		a++;
	}
	_putchar('\n');
}
