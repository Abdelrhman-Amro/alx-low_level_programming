#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: UI OR 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, len = 0, mul = 1;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		len++;
		b++;
	}
	b--;
	while (len--)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			dec += mul;
		mul *= 2;
		b--;
	}
	return (dec);
}
