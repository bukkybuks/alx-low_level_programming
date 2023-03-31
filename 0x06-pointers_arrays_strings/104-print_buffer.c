#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: pointer
 * @size: size of the buffer
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				printf("%02x", (unsigned char)b[j]);
			}
			else
			{
				printf(" ");
			}
			if (j % 2)
			{
				putchar(' ');
			}
		}
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
			{
				break;
			}
			if (b[j] >= ' ' && *(b + j) <= '~')
				putchar(*(b + j));
			else
				putchar('.');
		}
		i += 10;
		if (i < size)
		{
			putchar('\n');
		}
	}
	putchar('\n');
}
