#include "main.h"

/**
 *_strlen - function
 *@s: S
 *Return: I
*/

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
