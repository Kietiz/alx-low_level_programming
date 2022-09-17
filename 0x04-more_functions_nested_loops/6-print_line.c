#include "main.h"

#include <stdio.h>

/**
 * print_line - prints a line
 * @n: number of times to print line
 * Return: a straight line
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (count = 1 ; count <= n ; count++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
