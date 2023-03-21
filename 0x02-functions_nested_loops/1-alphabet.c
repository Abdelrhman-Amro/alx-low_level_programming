#include "main.h"

/**
 * main - entery point
 *
 * Description: print _putchar
 *
 * Return: on success 1
 *
 * print_alphabet - print alphabet
 *
 * Return: Always 0
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
