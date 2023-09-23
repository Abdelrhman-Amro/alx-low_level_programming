#include "main.h"

/**
 * get_bit - return specific bit
 * @n: number
 * @index: nth of bit to return
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return ((n & (i << index)) != 0);
}
