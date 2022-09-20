#include "main.h"

/**
 * puts2 - print every third number
 * @str: the string
 * Return: null
 */

void puts2(char *str)
{
	int a;
	int b;
	int count = 0;

	for (a = 0 ; str[a] != '\0' ; a++)
		count++;
	for (b = 0 ; b <= (count - 1) ; b = b + 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
