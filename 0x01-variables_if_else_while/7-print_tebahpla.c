#include <stdio.h>
/**
 * main - This represents that the function takes no argument
 * Return: 0 (successful execution)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')

	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
