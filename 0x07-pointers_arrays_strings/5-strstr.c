#include "main.h"
/**
 * _strstr - find the first occurrence of
 * a substring in another string
 * @needle: substring
 * @haystack: string
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
			;
		}
		if (!(needle[i]))
		{
			return (haystack);
		}
	}
	return (0);
}
