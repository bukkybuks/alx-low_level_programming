#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	for (p -= 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
