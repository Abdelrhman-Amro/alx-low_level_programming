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
	int x = 48, i, j, k, l;

	for (i = 0 + x; i <= 9 + x; i++)
	{
		for (j = 0; j <= 9 + x; j++)
		{
			for (k = i; k <= 9 + x; k++)
			{
				for (l = j + 1; l <= 9 + x; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 9 && j == 8)
						break;
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');

	return (0);
}
