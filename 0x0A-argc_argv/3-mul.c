#include "main.h"

/**
 * STI - function
 * @S: string
 * Return: I
*/

int STI(char *S)
{
	int I, i;

	i = 0, I = 0;
	while (S[i] != '\0')
	{
		I = I * 10 + (S[i] - '0');
		i++;
	}
	return (I);
}

/**
 * main - function
 * @argc: number
 * @argv: string
 * Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (STI(argv[1]) * STI(argv[2])));
		return (0);
	}
	printf("Error\n");
	return (1);
}
