#include <stdio.h>

/**
 *main - function
 *Return: Always 0
*/

int main(void)
{
	int x, y, i;
	unsigned long z;

	x = 1, y = 2;
	printf("%d, %d", x, y);
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
