#include "main.h"

/**
 *_strcpy - function
 *@dest: destination
 *@src: source
 *Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	char *cp = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = src[i];

	return (dest);
}
