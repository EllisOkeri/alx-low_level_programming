#include "main.h"

/**
 * power_operation - square root
 * @n: number
 * @c: root
 * @_sqrt_recursion - square root of number
 * Return: square root or -1
**/

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: square root
**/

int _sqrt_recursion(int n)

{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
}
