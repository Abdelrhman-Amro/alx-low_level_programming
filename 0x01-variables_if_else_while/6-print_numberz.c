#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print numbers
 *
 * Return: 0 if success
*/

int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);
	putchar('\n');
	return (0);
}
