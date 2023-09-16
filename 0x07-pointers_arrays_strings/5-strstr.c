#include "main.h"

/**
 *_strstr - function
 *@haystack: Original string
 *@needle: sub string
 *Return: pointer Or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] >= '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i + 1;
			j++;
			while (haystack[k] == needle[j] && needle[j] != '\0')
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return (0);
}
