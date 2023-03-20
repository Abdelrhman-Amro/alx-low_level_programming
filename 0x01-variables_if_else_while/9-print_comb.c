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

	while (i < 57)
	{
		putchar(i);
		if (i == 58)
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
