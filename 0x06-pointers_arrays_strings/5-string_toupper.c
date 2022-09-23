#include "main.h"

/**
 * *string_toupper - converts strings to upper case
 * @str: the string
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	i++;
	}
	return (str);
}

