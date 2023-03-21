#include "main.h"

/**
 *print_last_digit - last digit of a number
 *
 *@x: Number
 *
 * Return: last digit
*/

int print_last_digit(int x)
{
	if (x < 0)
		x *= -1;
	return (x % 10);
}
