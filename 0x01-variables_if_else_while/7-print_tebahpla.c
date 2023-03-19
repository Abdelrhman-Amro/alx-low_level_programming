#include <stdio.h>

/**
 * main - start here
 *
 * Description: alphabet in lowercasse
 *
 * Return: 0 if Success
*/

int main(void)
{
	int i = 122;

	while (i > 96)
		putchar(i--);
	putchar('\n');
	return (0);
}
