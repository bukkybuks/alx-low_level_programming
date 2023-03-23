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
		int c;

		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}

			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
