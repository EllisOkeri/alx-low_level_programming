#include "main.h"
/**
 * _isdigit-checks if var is btw 0-9
 * @c: variable
 * Return: 1 if number btw 0-9, 0 if not
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
