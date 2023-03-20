#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print numbers
 *
 *Return: 0 if success
*/

int main(void)
{
	int x = 48;

	for (int i = 0 + x; i < 9 + x; i++)
	{
		for (int j = i + 1; j <= 9 + x; j++)
		{
			putchar(i);
			putchar(j);
			if (i != x + 8)
			{
			putchar(',');
			putchar(' ');
			}

		}
	}
	putchar('\n');

	return (0);
}
