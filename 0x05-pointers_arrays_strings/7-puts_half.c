#include "main.h"

/**
 *puts_half - prints half of a string
 *@str: input string.
 *Return: void.
**/

void puts_half(char *str)
{
	int num = 0, a;

	while (num >= 0)
	{
		if (str[num] == '\0')
			break;
		num++;
	}
		if (num % 2 == 1)
			a = num / 2;
		else
			a = (num - 1) / 2;
		for (a++, a < num, a++)
			_putchar(str[a]);
		_putchar('\n');
}
