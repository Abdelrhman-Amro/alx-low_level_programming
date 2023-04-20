#include "main.h"

/**
 *_memset - function
 *@s: stringgg
 *@b: charrr
 *@n: inttt
 *Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *res = s;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (res);
}
