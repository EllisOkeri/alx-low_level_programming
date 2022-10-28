#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest:destination.
 * @src:source.
 * @n: amount of bytes used from src.
 * Return: dest.
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
