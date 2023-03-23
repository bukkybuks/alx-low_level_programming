#include "main.h"
/**
 * print_diagonal - prints the character '\' n times
 * @n: is the number of times the character is to be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
