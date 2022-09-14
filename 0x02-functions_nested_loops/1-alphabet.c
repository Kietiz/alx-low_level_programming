#include <stdio.h>

#include "main.h"

/**
 * print_alphabet - prints alphabets in small letters
 * Description: Uses headers
 * Return: always 0
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
}
