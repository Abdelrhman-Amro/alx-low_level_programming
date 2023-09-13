#include "main.h"

/**
 * _strncat - concat
 * @dest: destination
 * @src: source
 * @n: length
 * Return: pointer to concat
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
