#include "main.h"

/**
 * print_to_98 - prnts values from n to 98
 * @n: first number
 * Return: always 0
 */

void print_to_98(int n)
{
	for (n = n ; n <= 98 ; n++)
		_putchar(n + '0');
	_putchar('\n');
}
