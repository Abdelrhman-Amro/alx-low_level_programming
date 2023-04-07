#include "main.h"

/**
 *SQR - function
 *@n: number
 *@val: value
 *Return: square root
*/

int SQR(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (SQR(val + 1));
	else
		return (-1);
}

/**
 *_sqrt_recursion - function
 *@n: number
 *Return: square root
*/

int _sqrt_recursion(int n)
{
	return (SQR(n, 1));
}
