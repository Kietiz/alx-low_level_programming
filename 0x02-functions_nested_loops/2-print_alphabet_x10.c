#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Description: uses _putchar
 * Retturn: always 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (c = 'a' ; c <= 'z' ; c++)
		while (i < 10)
			_putchar(c);
	_putchar('\n');
	i++;
}
