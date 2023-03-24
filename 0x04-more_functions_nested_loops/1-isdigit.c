#include "main.h"

/**
 * _isdigit - check digit or not
 *
 * @c: number to check
 *
 * return: 1 if success else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
