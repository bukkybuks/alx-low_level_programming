#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
