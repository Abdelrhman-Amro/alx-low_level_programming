#include "main.h"
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
		printf("%d\n", (argv[1] * argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
