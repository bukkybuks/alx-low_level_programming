#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j, p;
	char *a, temp;

	a = s;
	while (s[p] != '\0')
	{
		p++;
	}
	for (j = 1; j < p; j++)
	{
		a++;
	}
	for (i = 0; i < (p / 2); i++)
	{
		temp = s[i];
		s[i] = *a;
		*a = temp;
		a--;
	}
}
