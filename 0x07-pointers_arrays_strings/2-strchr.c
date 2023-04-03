#include "main.h"

/**
 * _strchr - find char
 *
 * @s: first address
 *
 * @c: char to check
 *
 * Return: first occurrence
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}

	return ('\0');
}
