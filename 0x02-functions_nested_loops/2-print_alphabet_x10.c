#include "main.h"
/**
 * print_alphabet_x10 - Prints out the alphabet 10 times
 * Return: void (on successful execution)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
