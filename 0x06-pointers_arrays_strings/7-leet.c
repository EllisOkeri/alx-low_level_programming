#include "main.h"

/**
 * leet - changes string into 1337
 * @s: input string.
 * Return: dest.
**/

char *leet(char *s)
{
	int count = 0, i;

	int small[] = {97, 101, 111, 116, 108};
	int capital[] = {65, 69, 79, 84, 76};
	int number[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == small[i] || *(s + count) == capital[i])
			{
				*(s + count) = number[i];
				break;
			}
		}
		count++;
	}
		return (s);
}
