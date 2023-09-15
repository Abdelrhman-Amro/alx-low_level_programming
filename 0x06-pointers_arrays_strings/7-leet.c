#include "main.h"

/**
 * leet - encode
 * @s: string
 * Return: string
*/
char *leet(char *s)
{
	char *letters = "aeotl", *code = "43071";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (letters[j] == s[i] || (letters[j] - 32) == s[i])
				s[i] = code[j];
		}
		i++;
	}
	return (s);
}
