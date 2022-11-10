#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - sums up numbers
 * @argc: Number of command line arguments
 * @argv: Arguments strings
 * Return: 0 if success
**/

int main(int argc, char *argv[])

{
	int a, b, length, sum;

	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);
			for (b = 0; b < length; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
