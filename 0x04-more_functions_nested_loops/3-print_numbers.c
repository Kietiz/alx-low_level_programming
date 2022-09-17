#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 to 9  followed by newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		putchar(i + '0');
	putchar('\n');
}
