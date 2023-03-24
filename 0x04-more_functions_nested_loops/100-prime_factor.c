#include <stdio.h>
/**
 * _sqrt - find the square root
 *
 * Description: fine square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return(sqrt);
}

/**
 * larg_pr_fac - find largest prime factor
 *
 * Description: find largest prime factor
 *
 * @num: number to find
*/

void larg_pr_fac(long int num)
{
	int prmN, largest;

	while (num % 2 == 0)
		num = num / 2;
	for (prmN = 3; prmN <= _sqrt(num); prmN += 2)
	{
		while (num % prmN == 0)
		{
			num /= prmN;
			largest = prmN;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - enry point
 *
 * Desription: largest prime factor
 *
 * Return: Always 0
*/

int main(void)
{
	larg_pr_fac(612852475143);

	return (0);
}
