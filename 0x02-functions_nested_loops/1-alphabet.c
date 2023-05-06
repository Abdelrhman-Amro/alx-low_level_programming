#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i+1);

	_putchar('\n');
}
