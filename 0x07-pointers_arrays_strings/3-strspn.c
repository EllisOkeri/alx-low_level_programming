#include "main.h"

/**
 * _strspn - looks for a string
 * @s: string
 * @accept: accepted string
 * Return: s
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while (accept[i])
	{
		j = 0;
		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++;
		}
		i++;
	}
	return (k);
}
