#include "main.h"

/**
 * slen - string length
 * @s: string
 * Return: length
*/
int slen(char *s)
{
	int ln = 0;

	if (s == NULL)
		return (0);
	while (*s != '\0')
	{
		ln++;
		s++;
	}
	return (ln);
}

/**
 * atoz - search for letters
 * @s: string
 * Return: pointer
*/
char *atoz(char *s)
{
	while (*s != '\0' && *s == ' ')
		s++;
	return (s);
}

/**
 * w_cnt - count words
 * @s: string
 * Return: number of words
*/
int w_cnt(char *s)
{
	int wcnt = 0;

	if (*s != ' ')
		wcnt++;
	while (*s != '\0')
	{
		if (*s == ' ')
		{
			s = atoz(s);
			if (*s == '\0')
				break;
			wcnt++;
		}
		s++;
	}
	return (wcnt);
}

/**
 * ln_w - length of word
 * @s: string
 * Return: length
*/
int ln_w(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' && s[i] != ' '; )
		i++;
	return (i);
}

/**
 * strtow - string to array of strings
 * @str: string
 * Return: array of strings
*/
char **strtow(char *str)
{
	int wcnt, ln, i, j, x;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);
	wcnt = w_cnt(str);
	if (wcnt == 0)
		return (NULL);
	arr = malloc(sizeof(char *) * (wcnt + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < wcnt; i++)
	{
		str = atoz(str);
		ln = ln_w(str);
		arr[i] = malloc(sizeof(char) * (ln + 1));
		if (arr[i] == NULL)
		{
			for (x = i; x >= 0; x--)
				free(arr[x]);
			free(arr);
			break;
		}
		for (j = 0; j < ln; j++)
		{
			arr[i][j] = *str;
			str++;
		}
		arr[i][j] = '\0';
	}
	arr[wcnt] = NULL;

	return (arr);
}
