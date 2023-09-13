#include "main.h"

/**
 * _strcat - concat
 * @dest: destination
 * @src: source
 * Return: pointer to concat
*/
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
		dest[i] = '\0';
	return (dest);
}
