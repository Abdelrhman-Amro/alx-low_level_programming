#include <stdio.h>
#include "main.h"

/**
 *print_diagsums - function
 *@a: pointer
 *@size: rows and coloumn
*/

void print_diagsums(int *a, int size)
{
	int i, Sumx, Sumy;

	i = 0, Sumx = 0;
	for (; i < size * size; i += size + 1)
		Sumx += *(a + i);

	i = size - 1, Sumy = 0;
	for (; i < (size * size) - size + 1; i += size - 1)
		Sumy += *(a + i);

	printf("%d, %d\n", Sumx, Sumy);
}
