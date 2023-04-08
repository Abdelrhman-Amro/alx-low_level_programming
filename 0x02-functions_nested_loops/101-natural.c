#include <stdio.h>

/**
 *main - function
 *Return: Always 0
*/

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 3; i <= 1024; i += 3)
		sum += i;
	for (i = 5; i <= 1024; i += 5)
		sum += i;
	for (i = 15; i <= 1024; i += 15)
		sum -= i;
	printf("%d\n", sum);

	return (0);
}
