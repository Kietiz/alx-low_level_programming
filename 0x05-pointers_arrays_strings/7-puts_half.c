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
	{
		count++;
	}
	b = count / 2;
	if (count % 2 == 1)
	{
		b = (count + 1) / 2;
	}
	for (a = b ; str[a] != '\n' ; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

