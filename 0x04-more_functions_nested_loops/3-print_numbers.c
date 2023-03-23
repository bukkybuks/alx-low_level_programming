#include "main.h"
/**
 * print_numbers - prints out the numbers 0 to 9
 * Return: void (on successful execution)
 */
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
	{
		_putchar(c + '0');
		c++;
	}
	_putchar('\n');
}
