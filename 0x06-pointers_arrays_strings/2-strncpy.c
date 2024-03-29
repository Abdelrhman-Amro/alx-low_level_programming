#include "main.h"
/**
 * _strncpy - Copy
 * @dest: Destination
 * @src: Source
 * @n: Number
 * Return: pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
