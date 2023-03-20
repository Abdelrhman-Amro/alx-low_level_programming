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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				l = 0;
				if (k == i)
					l = j + 1;
				for (; l <= 9; l++)
				{
					putchar(i + x);
					putchar(j + x);
					putchar(' ');
					putchar(k + x);
					putchar(l + x);
					if (i == 9 && j == 8)
					{
						++l;
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
