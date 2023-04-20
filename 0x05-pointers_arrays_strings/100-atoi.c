#include "main.h"

/**
 *_atoi - function
 *@s: string
 *Return: n
*/

int _atoi(char *s)
{
	int n = 0, i = 0, minus = 0, d = 10;

	while (s[i] != '\0' && !(s[i] >= 48 && s[i] <= 57))
	{
		if (s[i] == '-')
			minus++;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		if (minus % 2)
			n = n * d - (s[i] - 48);
		i++;
	}

	return (n);
}
