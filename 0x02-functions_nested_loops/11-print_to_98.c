#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prnts values from n to 98
 * @n: first number
 * Return: always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n ; n <= 98 ; n++)
		{
			printf("%d, ", n);
			printf("98");
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (n = n ; n > 98 ; n--)
		{
			printf("%d, ", n);
			printf("98");
		}
		printf("%d, ", n);
	}
}
