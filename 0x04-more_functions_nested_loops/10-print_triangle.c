#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: number of lines
 * Return: void
 **/

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
			_putchar(' '),
				for (j--; j < size; j++)
					_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}

