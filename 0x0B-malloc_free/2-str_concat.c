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
 * str_concat - string concat
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new string
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j;
	char *s3;

	s3 = (char *)malloc(sizeof(char) * (slen(s1) + slen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; i++, j++)
		s3[i] = s1[j];
	for (j = 0; s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];
	s3[i] = '\0';
	return (s3);
}
