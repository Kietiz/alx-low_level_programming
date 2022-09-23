#include "main.h"

/**
 * *string_toupper - converts strings to upper case
 * @n: the string
 * Return: uppercase string
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
