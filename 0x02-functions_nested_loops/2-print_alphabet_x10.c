#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in small letters
 * Description: Uses headers
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		for (i = 0 ; i < 10 ; i++)
			_putchar(c);
	_putchar('\n');
}
