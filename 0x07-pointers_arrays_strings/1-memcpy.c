#include "main.h"
/**
 * _memcpy - copies bytes from one memory area to another
 * @n: no. of bytes
 * @src: memory area 1
 * @dest: memory area 2
 * Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n = n - 1;
	}
	return (dest);
}
