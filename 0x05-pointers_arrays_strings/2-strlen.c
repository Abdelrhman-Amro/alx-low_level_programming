#include "main.h"

/**
 * _strlen - calculate length of a string
 *
 * @s: conatain string address
 *
 * Return: size of string
*/

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
