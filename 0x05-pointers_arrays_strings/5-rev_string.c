#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: string to reverse
*/

void rev_string(char *s)
{
	int len;
	char *x;

	len = 0, x = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	while (len--)
	{
		s[len] = *x;
		x++;
	}
}
