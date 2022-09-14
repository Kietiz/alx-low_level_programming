#include <stdio.h>

/**
 * main - print aphabets
 * Description: prints a to z in small leters
 * Return: always 0
 */

int print_alphabet()
{
	int x;

	for (x = 'a' ; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
	return (x);
}
