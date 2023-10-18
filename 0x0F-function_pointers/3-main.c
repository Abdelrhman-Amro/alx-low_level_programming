#include "3-calc.h"

/**
 * Exit - Exit with message and status
 * @st: status
*/
void Exit(int st)
{
	printf("Error\n");
	exit(st);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: integer
*/
int main(int argc, char **argv)
{
	int num1, num2;
	int (*op_fun)(int, int);
	int res;

	if (argc != 4)
		Exit(98);

	op_fun = get_op_func(argv[2]);
	if (!op_fun)
		Exit(99);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
		Exit(100);

	res = op_fun(num1, num2);
	printf("%d\n", res);

	return (0);
}
