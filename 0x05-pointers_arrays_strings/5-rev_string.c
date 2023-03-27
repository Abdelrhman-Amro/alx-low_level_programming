#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
*/

void rev_string(char *s)
{
	int len;
	char *x, temp;

	len = 0, x = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	len /= 2;
	while (len--)
	{
		s--;
		temp = *s;
		*s = *x;
		*x = temp;
		x++;
	}
}
