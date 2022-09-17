#include "main.h"

#include <stdio.h>

/**
 * print_diagonal - prints diagonal line to the terminal
 * @n: number of times diagonal to be drawn
 * Return: diagonal line
 */

void print_diagonal(int n)
{
	int count;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (count = 1; count <= n; count++)
		{
			for (s = 1 ; s <= count ; s++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
