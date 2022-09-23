#include "main.h"

/**
 * *string_toupper - converts strings to upper case
 * @str: the string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
