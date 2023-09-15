#include "main.h"

/**
 * reverse_array - REVERSE
 * @a: int 1
 * @n: size
*/

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, x;

	while (i < (n / 2))
	{
		x = a[i];
		a[i] = a[j];
		a[j] = x;
	}
}
