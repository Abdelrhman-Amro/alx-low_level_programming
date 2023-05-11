#include "main.h"

/**
 * STI - function
 * @S: string
 * Return: I
*/

int STI(char *S)
{
	int I, i, minus;

	i = 0, I = 0, minus = 1;
	if (S[i] == '-')
		i++, minus = -1;
	while (S[i] != '\0')
	{
		I = I * 10 + (S[i] - '0');
		i++;
	}
	I *= minus;
	return (I);
}
