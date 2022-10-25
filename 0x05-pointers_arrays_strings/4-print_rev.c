#include "main.h"

/**
 *_puts - prints a string in reverse, followed by a new line.
 *@str: input string.
 *Return: void.
**/

void print_rev(char *s)
{
	int num = 0;

	while (num >= 0)
	{
		if (s[num] == '\0')
			break;
		num++;
	}
	for (num--; num >= 0; num--)
	       _putchar(s[num]);
	_putchar('\n');
}
