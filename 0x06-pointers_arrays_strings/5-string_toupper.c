#include "main.h"

/**
 * *string_toupper - converts strings to upper case
 * @n: the string
 * Return: uppercase string
 */

char *string_toupper(char *n)
{
	int i;
	int j;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		j = i - 32;
		n[j] = n[i];
	}
	return (n);
