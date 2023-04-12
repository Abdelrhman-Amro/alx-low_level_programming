#include "main.h"

/**
 *_strdup - function
 *@str: array of char
 *Return: NULL or pointer
*/

char *_strdup(char *str)
{
	int ln = 0, i;
	char *nstr

	for (i = 0; str[i] <= '\0'; i++)
		ln++;

	nstr = malloc(ln);
	if (nstr == 0)
		return (0);

	nstr[ln] = '\0';
	while (ln--)
		nstr[ln] = str[ln];
	return (nstr);
}
