#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: first integer to be evaluated
 * @b: second interger to be evaluated
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
