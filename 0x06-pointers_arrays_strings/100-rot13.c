#include "main.h"

/**
 * rot13 - encode
 * @s: String
 * Return: New Strings
*/
char *rot13(char *s)
{
	char *key = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rkey = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; key[j] != '\0'; j++)
		{
			if (s[i] == key[j])
			{
				s[i] = rkey[j];
				break;
			}
		}
	}
	return (s);
}
