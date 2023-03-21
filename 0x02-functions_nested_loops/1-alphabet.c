#include "main.h"
/**
 * print_alphabet - prints out the alphabet
 * Return: void (on successful execution)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
