#include "main.h"

/**
 * rev_string - program reverse a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
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
		s[b];
	}
}
