#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - memory allocation
 * @b: the size of memory allocation
 * Return: void
 * **/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
