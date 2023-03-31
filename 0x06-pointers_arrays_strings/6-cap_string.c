#include "main.h"
/**
 * cap_string - Capitalizes first letter of each word
 * @str: string to be analyzed
 * Return: string
 */
char *cap_string(char *str)
{
	int i, j;

	char sofw[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
			'(', ')', '{', '}', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; sofw[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] -= 32;
				}
			}
			if (str[i] == sofw[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
	return (str);
}
