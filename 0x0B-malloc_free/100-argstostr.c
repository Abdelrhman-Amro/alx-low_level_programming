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
 * argstostr - concatenates all the arguments of the program.
 * @ac: number of strings
 * @av: array of poiters to strings
 * Return: string or null
*/
char *argstostr(int ac, char **av)
{
	int i, ln = 0, c, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		ln += slen(av[i]);
	ln += ac + 1;
	str = malloc(sizeof(char) * ln);
	if (str == NULL)
		return (NULL);

	for (i = 0, c = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, c++)
		{
			str[c] = av[i][j];
		}
		str[c] = '\n';
		c++;
	}
	str[c] = '\0';
	return (str);
}
