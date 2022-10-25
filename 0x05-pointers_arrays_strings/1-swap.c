include "main.h"

/**
 *swap_int-Swaps the values of 2 integers.
 *@a:First value to be swapped.
 *@b:second value to be swapped.
 *Return:void.
**/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
