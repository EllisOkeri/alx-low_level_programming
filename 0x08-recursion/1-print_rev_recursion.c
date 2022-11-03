#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse and a new line.
 * @s: string
 * Return: void
**/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
