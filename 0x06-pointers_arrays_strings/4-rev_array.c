#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a:array.
 * @n:elements in array.
 * Return:void
**/

void reverse_array(int *a, int n)
{
	int e, f, temp;

	for (e = 0; e < n - 1; e++)
	{
		for (j = e + 1; f > 0; f--)
		{
			temp = *(a + f);
			*(a + f) = *(a + (f - 1));
			*(a + (f - 1)) = temp;
		}
	}
	return (0);
}
