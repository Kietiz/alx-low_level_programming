#include <stdio.h>

/**
 * main - print aphabets
 * Description: prints a to z in small leters
 * Return: always 0
 */

int print_alphabets()
{
	int x;

	for (x = 'a' ; x <= 'z' )
		putchar(x);
	putchar('\n');
	return (x);
}
