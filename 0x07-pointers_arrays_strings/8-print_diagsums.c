#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j;

	int s1, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size + 1) * i];
	}
	for (j = 0; j < size; j++)
	{
		s2 += a[(size - 1) * (j + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
