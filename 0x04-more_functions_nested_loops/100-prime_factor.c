#include <stdio.h>

/**
 *largest_prime_factor - function
 *@n: number
 *Return: largest_prime_factor
*/

long long largest_prime_factor(long long n)
{
	long long mx;
	int i;

	mx = n;
	while (n % 2 == 0)
	{
		n /= 2;
		mx = 2;
	}

	for (i = 3; i < 782849; i += 2)
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
	printf("%lld\n", largest_prime_factor(612852475143));

	return (0);
}
