#include <stdio.h>

/**
 * main - start here
 *
 * Description: alphabet in lowercasse and uppercase
 *
 * Return: 0 if Success
*/

int main(void)
{
	int i = 97;

	while (i < 123)
		putchar(i++);
	i = 65;

	while (i < 91)
		putchar(i++);

	putchar('\n');
	return (0);
}
