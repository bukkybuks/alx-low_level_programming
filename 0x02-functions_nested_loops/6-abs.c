#include "main.h"
/**
 * _abs - Computes the ansolute function of an integer
 * @c: integer to be checked
 * Return: Returns absolute integer
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	else
	{
		return (c);
	}
}

