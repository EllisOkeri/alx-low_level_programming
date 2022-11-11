#include "main.h"
#include <stdio.h>

/**
 *_strcpy - copies string pointed by source
 *with terminating null byte to
 *buffer pointed to by destination
 *@dest: destination.
 *@src: source.
 *Return: pointer to destination
 **/

char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (num >= 0)
	{
		*(dest + num) = *(src + num);
		if (*(src + num) == '\0')
			break;
		num++;
	}
	return (dest);
}
