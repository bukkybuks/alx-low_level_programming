#include "main.h"
/**
 * rot13 - encodes a character with the 13th one after it
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char letters[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char code[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = code[j];
				break;
			}
		}
	}
	return (s);
}
