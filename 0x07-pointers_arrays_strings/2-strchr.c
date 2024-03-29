#include "main.h"

/**
 *_strchr - find first char and return its address
 *@s: pointer point to first address
 *@c: char to check
 *Return: first occurrence
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);

	return (0);
}
