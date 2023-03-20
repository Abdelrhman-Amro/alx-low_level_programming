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
		putchar(',');
		i++;
	}
	putchar(57);
	putchar('$');
	putchar('\n');

	return (0);
}
