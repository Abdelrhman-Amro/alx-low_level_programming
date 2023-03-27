#include "main.h"

/**
 * swap_int - swap two intergers
 *
 * @a: num1
 * @b: num2
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
