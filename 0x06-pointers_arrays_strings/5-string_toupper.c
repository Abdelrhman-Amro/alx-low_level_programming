#include "main.h"

/**
 * string_toupper - low to up
 * @s: string
 * Return: NEW STRING
*/
char *string_toupper(char *s)
{
	int i = 0;

	while (s != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
