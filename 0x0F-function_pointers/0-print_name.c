#include "function_pointers.h"

/**
 * print_name - print character
 * @name: name
 * @f: pointer
 * Return: void
**/

void print_name(char *name, void (*f)(char *))

{
	if (name && f)
		f(name);
}
