#include "main.h"

/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is returned
 *Return:length of the string.
**/

int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != 0)
	{
		n++;
	}
	return (n);
}
