#include <stdio.h>
/**
 * main - This represents that the function takes no argument
 * Return: 0 (successful execution)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
