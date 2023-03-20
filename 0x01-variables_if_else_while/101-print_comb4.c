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
	int x = 48, i, j, k;

	for (i = 0 + x; i < 8 + x; i++)
	{
		for (j = i + 1; j < 9 + x; j++)
		{
			for (k = j + 1; k <= 9 + x; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != x + 7)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
