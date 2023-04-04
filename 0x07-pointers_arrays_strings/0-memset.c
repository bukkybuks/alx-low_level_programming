#include "main.h"
/**
 * _memset - fills the bytes of the memory area pointed to with the byte b
 * @s: the pointer
 * @b: constant byte
 * @n: first bytes of the memory
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n = n - 1;
	}
	return (s);
}
