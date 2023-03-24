#include "main.h"
/**
 * _isupper - check uppercase
 *
 * @c: for chech in ASCII
 *
 * Return: 1 if upper else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
