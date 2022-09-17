#include "main.h"

#include <stdio.h>

/**
 * print_square - funtion printd a square followed by newline
 * @size: sixe of the square
 * Return: return the square
 */

void print_square(int size)
{
	int c;
	int r;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (c = 1; c <= size; c++)
		{
			putchar('#');
			for (r = 2; r <= size; r++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
