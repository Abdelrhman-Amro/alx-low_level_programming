#include "main.h"
#include <math.h>

/**
 *largest_prime_factor - function
 *@n: number
 *Return: largest_prime_factor
*/

long long largest_prime_factor(long long n)
{
	long long mx;

	mx = n;
	while (n % 2 == 0)
	{
		n /= 2;
		mx = 2;
	}

	for (i = 3; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			mx = i;
		}
	}
	if (n > 2)
		mx = n;
	return (mx);
}

/**
 *main - function
 *Return: 0
*/

int main(void)
{
	printf("%ll\n", largest_prime_factor(612852475143));

	return (0);
}
