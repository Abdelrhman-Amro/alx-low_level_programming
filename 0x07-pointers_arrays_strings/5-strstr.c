#include "main.h"

/**
 *_strstr - function
 *
 *@haystack: Original string
 *
 *@needle: sub string
 *
 *Return: pointer Or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0, j = 0;
	for (; haystack[i] >= '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (needle);
		}
		else
			j = 0;
	}
	return ('\0');
}
