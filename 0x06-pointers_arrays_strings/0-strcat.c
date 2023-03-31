#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @scr: second string
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *scr)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
