#include "main.h"

/**
 * flip_bits - count number of bits to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: number of flips
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cnt = 0;

	while (n != 0 || m != 0)
	{
		cnt += (n & 1) ^ (m & 1);
		n = n >> 1;
		m = m >> 1;
	}
	return (cnt);
}
