#include "main.h"

int Nn(int n)
{
	if (n == 0)
		return (0);
	return (1 + Nn(n / 10));
}

int Ss(int d)
{
	if (d == 1)
		return (1);
	return (10 * Ss(d - 1));
}

int Ee(int d)
{
	if (d == 0)
		return (0);
	return (9 + 10 * Ee(d - 1));
}

long double SQR(long double n, long double s, long double e)
{
	long double m;

	m = (s+e) / 2;

	if (m * m == n)
		return m;
	else if (m * m > n)
		return (SQR(n, s, m));
	else
		return (SQR(n, m, e));
}

/**
 *_sqrt_recursion - function
 *@n: number
 *Return: square root
*/

int _sqrt_recursion(int n)
{
	int d, s, e, x;

	d = (1 + Nn(n)) / 2;
	s = Ss(d);
	e = Ee(d);
	x = SQR(n, s, e);

	long double y;

	y = SQR(n, s, e);

	if (y > x)
		return (-1);
	else
		return (x);
}
