#include "main.h"

/**
 * rev_string - program reverse a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int fc = 0;
	char rev = s[0];

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		fc++;
	}
	while (s[fc - 1] != '\0')
	{
		s[fc - 1] = rev;
		fc--;
	}
}
