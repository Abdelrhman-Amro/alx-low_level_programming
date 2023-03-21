#include "main.h"

/**
 *_isalpha - check if alphabetic character
 *
 * @c: ASCII
 *
 * Return: 1 if true else 0
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
