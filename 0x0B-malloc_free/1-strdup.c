#include "main.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length
*/
int _strlen(char *s)
{
	int ln = 0;

	while (*s != '\0')
	{
		ln++;
		s++;
	}
	return (ln);
}

/**
 * _strdup - dublicate
 * @str: string
 * Return: pointer
*/
char *_strdup(char *str)
{
	int i = 0;
	char *dp;

	if (str == NULL)
		return (NULL);
	dp = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	if (dp == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dp[i] = str[i];
	dp[i] = str[i];
	return (dp);
}
