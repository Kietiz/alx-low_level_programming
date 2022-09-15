#include "main.h"

/**
 * print_last_digit - prints last digit of the value
 * @n: the input to the program
 * Return: always 0
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = -1 * ld;
	}
	_putchar(ld + '0');
	return (ld);
}
