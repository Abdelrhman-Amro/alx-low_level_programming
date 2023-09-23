#include "main.h"

/**
 * str_len - return length of string
 * @s: string
 * Return: Length
*/
int str_len(const char *s)
{
	int len = 0;

	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * binary_to_uint - Convert binary to deciman
 * @b: binary string
 * Return: decimal number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, pow = 1;
	int len = str_len(b);

	if (!b || *b == '\0')
		return (0);
	while (--len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] == '1')
			dec += pow;
		pow *= 2;
	}
	return (dec);
}
