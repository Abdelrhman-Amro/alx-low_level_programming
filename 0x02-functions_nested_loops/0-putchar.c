#include <stdio.h>
#include <main.h>
/**
 * main - entery point
 *
 * Description: print "_putchar"
 *
 * Return: on success 1
*/

int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
