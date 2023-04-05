#include "main.h"

/**
 *factorial - function
 *@n: number
 *Return: factorial
*/

unsigned long long factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
			return (-1);
		else if (n == 0)
			return (0);
		else
			return (1);
	}
	return (n * factorial(n - 1));
}
