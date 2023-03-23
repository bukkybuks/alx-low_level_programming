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
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
