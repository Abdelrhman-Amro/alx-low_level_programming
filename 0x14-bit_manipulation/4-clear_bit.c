#include "main.h"

/**
 * clear_bit - set specific bit to zero
 * @n: number
 * @index: nth bit
 * Return: 1 if success 0 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n &= (~(i << index));
	return (1);
}
