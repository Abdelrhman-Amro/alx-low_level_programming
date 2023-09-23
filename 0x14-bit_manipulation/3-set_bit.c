#include "main.h"

/**
 * set_bit - set pit on specific index
 * @n: number
 * @index: nth of bit to set
 * Return: number after set bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);
	return (*n | (i << index));
}
