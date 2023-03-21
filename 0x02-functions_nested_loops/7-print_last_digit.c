#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @c: number to be checked
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}
