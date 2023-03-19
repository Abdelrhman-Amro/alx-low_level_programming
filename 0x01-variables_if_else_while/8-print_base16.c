#include <stdio.h>

/**
 * main - start here
 *
 * Description: Hexadecimal
 *
 * Return: 0 if Success
*/

int main(void)
{
	int i = 48;

	while (i < 58)
		putchar(i++);

	i = 97;
	while (i < 103)
		putchar(i++);
	putchar('\n');
	return (0);
}
