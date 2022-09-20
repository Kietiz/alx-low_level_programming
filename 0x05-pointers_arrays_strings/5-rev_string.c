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

	while (s[fc] != '\0')
		fc++;
	for (a = 0 ; a <= (fc - 1) ; a++)
	{
		fc--;
		rev = s[a];
		s[a] = s[fc];
		s[fc] = rev;
	}
}
