#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Description: uses _putchar
 * Retturn: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		for (i = 0 ; i < 10 ; i++)
			_putchar(c);
	_putchar('\n');
