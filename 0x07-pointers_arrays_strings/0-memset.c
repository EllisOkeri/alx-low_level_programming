#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: memory area
 * @b: byte to fill
 * @n: bytes of memory area
 * Return: s
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
