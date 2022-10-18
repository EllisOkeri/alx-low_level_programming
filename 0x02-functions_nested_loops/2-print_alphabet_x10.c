#include "main.h"
/**
	*print_alphabet - prints all alphabets in lowercase ten times.
**/
void print_alphabet(void)
{
	int c = 0;
	char i;

	while (c++ <=9)
	{
	for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
	_putchar('\n');
	}
}
