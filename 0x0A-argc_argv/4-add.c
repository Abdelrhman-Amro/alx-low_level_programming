#include "main.h"

/**
 * main - program
 * @argc: c
 * @argv: vars
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, sum;

	if (argc <= 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (0);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
