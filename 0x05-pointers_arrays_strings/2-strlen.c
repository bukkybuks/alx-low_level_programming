#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to be counted
 * Return: length of string
 */
int _strlen(char *s)
{
	int p = 0;

	for (; *s != '\0'; s++)
	{
		p++;
	}
	return (p);
}
