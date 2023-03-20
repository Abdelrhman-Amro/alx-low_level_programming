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
	int i = 48, x = 44;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			x = 36;
		}
		putchar(x);
		if (i == 57)
			break;
		putchar(' ');
		i++;
	}
	putchar('\n');

	return (0);
}
