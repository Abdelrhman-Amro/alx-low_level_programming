#include <stdio.h>

/**
 *main - function
 *Return: Always 0
*/

int main(void)
{
	unsigned long x, y, z;
	int i;

	x = 1, y = 2;
	printf("%lu, %lu", x, y);
	for (i = 48; i > 0; i--)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
