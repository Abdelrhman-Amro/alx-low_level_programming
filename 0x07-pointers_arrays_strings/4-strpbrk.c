#include "main.h"

/**
 *_strpbrk - fuction use man strpbrk to know more about
 *@s: string to search in
 *@accept: string each char search for in s
 *Return: first occurrence
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
