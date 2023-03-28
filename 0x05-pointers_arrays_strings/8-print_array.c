#include "main.h"

/**
 * print_array - print array elements
 *
 * @a: pointer to array
 * @n: size of array
*/

void print_array(int *a, int n)
{
	while (n-- > 0)
	{
		if (n == 0)
			printf("%d", *a);
		else
			printf("%d, ", *a);
		a++;
	}
	printf("\n");
}
