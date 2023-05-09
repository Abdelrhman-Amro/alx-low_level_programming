#include "main.h"

/**
 *_strspn - callculate bytes in s which consist only of bytes from accept
 *@s: Original string
 *@accept: substring
 *Return: number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	int cnt, i, j;

	cnt = 0;
	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cnt++;
				break;
			}
		}
	}
	return (cnt);
}
