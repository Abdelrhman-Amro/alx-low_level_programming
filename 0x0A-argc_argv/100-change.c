#include "main.h"

/**
 * main - Program
 * @argc: c
 * @argv: vars
 * Return: 0
 **/
int main(int argc, char **argv)
{
	int cents[] = {25, 10, 5, 2, 1};
	int money, cnt = 0, i;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
		puts("0");
	else
	{
			for (i = 0; i < 5; i++)
			{
				cnt += money / cents[i];
				money = money % cents[i];
				if (money == 0)
					break;
			}
		printf("%d\n", cnt);
	}
	return (0);
}
