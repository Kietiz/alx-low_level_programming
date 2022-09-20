#include "main.h"

/**
 * puts_half - displays half the string
 * @str: the input
 * Reyrn: nothing
 */

void puts_half(char *str)
{
	int a;
	int b;
	int count = 0;

	for (a = 0 ; str[a] != '\n' ; a++)
		count++;
	for (b >= (count - 1) / 2 ; b <= (count - 1) ; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}

