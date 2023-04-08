#include <stdio.h>

/**
 *main - function
 *Return: Always 0
*/

int main(void)
{
	unsigned long x, y, z, sum;

	x = 1, y = 2, sum = 2;
	for (z = x + y; z <= 4000000; z = x + y)
	{
		if (z % 2 == 0)
			sum += z;
		x = y;
		y = z;
	}
	printf("%lu\n", sum);
	return (0);
}

