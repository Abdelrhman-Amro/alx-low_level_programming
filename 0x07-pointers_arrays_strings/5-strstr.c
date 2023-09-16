#include "main.h"

/**
 *_strstr - function
 *@haystack: Original string
 *@needle: sub string
 *Return: pointer Or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack + i - j);
		}
	}
	return (0);
}
