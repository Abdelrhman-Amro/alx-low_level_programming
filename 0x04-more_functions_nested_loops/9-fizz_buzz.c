#includ "main.h"

/**
 * main - entry point
 *
 * Description: Fizz-Buzz program
 *
 * Return: Always 0
*/

int main(void)
{
	int i;

	putchar(1 + '0');
	for (i = 2; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);

	}
	putchar('\n');

	return (0);
}
