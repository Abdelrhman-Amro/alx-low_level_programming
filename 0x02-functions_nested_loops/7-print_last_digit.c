#include "main.h"

/**
 *print_last_digit - last digit of a number
 *
 *@x: Number
 *
 *Return: last digit
*/

int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
