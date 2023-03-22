#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 at successful execution
 */
int main(void)
{
	long int first = 1, second = 2;
	long int next;
	int count = 3;

	next = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", next);
		}
		else
		{
			printf("%lu, ", next);
		}
		first = second;
		second = next;
		next = first + second;
		count++;
	}
	return (0);
}
