#include "main.h"

/**
 *_memset - function
 *@s: string
 *@b: char
 *@n: int
 *Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *res = s;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (res);
}
