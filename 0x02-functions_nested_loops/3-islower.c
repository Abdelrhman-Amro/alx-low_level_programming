#include "main.h"

/**
 * _islower - check lowercase
 *
 * @c: Decimal in ASCII
 *
 * Return: 1 if true
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
