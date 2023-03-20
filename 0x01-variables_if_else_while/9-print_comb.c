#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers
 *
 * Return: 0 if Success
*/


int main(void)
{
	int i = 48;

	while (1)
	{
		putchar(i);
		if (i == 57)
		{
			putchar('$');
			break;
		}
		putchar(',');
		i++;
	}
	putchar('\n');

	return (0);
}
