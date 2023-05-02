#include <stdio.h>

/**
 *nd - function
 *@n: Number
 *Return: d
*/

int nd(int n)
{
	int d = 1;

	n /= 10;
	while (n > 0)
	{
		n /= 10;
		d++;
	}
	return (d);
}

/**
 *main - function
 *Return: 0
*/

int main(void)
{
	long x, y, z;
	int i;

	x = 1, y = 2;
	printf("%d, %d", x, y);
	for (i = 2; i < 98; i++)
	{
		z = x + y;
		printf(", %l", z);
		x = y;
		y = z;

	}
	return (0);
}
