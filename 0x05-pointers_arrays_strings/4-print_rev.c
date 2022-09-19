#include "main.h"

/**
 * print_rev - prints a stirng in reverse
 * @s: string
 * Return: always 0
 */

void print_rev(char *s)
{
	int a;
	int b;
	int fc = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		fc++;
	}
	for (b = (fc - 1) ; b >= 0 ; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
