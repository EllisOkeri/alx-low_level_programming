#include "main.h"

/**
 * _strpbrk - searchs string
 * @s: string
 * @accept: accepted char
 * Return: s
**/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
