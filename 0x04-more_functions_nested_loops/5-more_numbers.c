#include "main.h"
/**
 * more_numbers - Prints out the numbers 0 to 14 ten times
 * Return: void (on successful execution)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int c, d, e;

		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				d = c % 10;
				e = (c - d) / 10;
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
		i++;
	}
}
