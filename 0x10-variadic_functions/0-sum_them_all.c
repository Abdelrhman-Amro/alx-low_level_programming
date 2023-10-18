#include "variadic_functions.h"

/**
 * sum_them_all - sum numbers
 * @n: number of integer to sum
 * @...: Varibales to sum
 * Return: sum of numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum;

	if (!n)
		return (0);
	va_start(args, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
