#include <stdio.h>

/**
 * main - start here
 *
 * Description: alphabet in lowercasse except q and e
 *
 * Return: 0 if Success
*/

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			++i;
			continue;
		}
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
