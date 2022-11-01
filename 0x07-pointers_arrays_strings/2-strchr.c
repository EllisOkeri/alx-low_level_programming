#include "main.h"

/**
 * _strchr - find character in string
 * @s: string
 * @c: character to be found
 * Return: c
**/

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);																		}
	}
	return ('\0');
}
