#include "main.h"

/**
 *create_array - function
 *@size: size
 *@c: char to fill
 *Return: Null or arr
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(1 * size);

	if (arr == 0 || size == 0)
		return (0);

	while (size--)
		arr[size] = c;

	return (arr);
}
