#include "main.h"
/**
 * _strpbrk - finds the 1st occurrence in a string of
 * a byte in another string
 * @s: first string
 * @accept: second string
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
