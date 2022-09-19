#include "main.h"

/**
 * _puts - prints a sting
 * @*str: string address;
 * @str: The string
 * Return: null
 */

void _puts(char *str)
{
	int c = 0;

	for (c = 0 ; str[c] != '\0' ; c++)
	{
		_putchar(str[c]);
	}
	putcha('\n');
}
