#include "main.h"

/**
 *_puts - prints a string, followed by a new line.
 *@str: input string.
 *Return: void.
**/

void _puts(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[num]);
		num++;
	}
}
