#include "main.h"

/**
 * _strlen - retururns the length of a sring
 * @s: the string
 * @*s: address of the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int n = 1;
	int sum = 0;
	char s1 = s[0];

	while (s1 != '\0')
	{
		sum++;
		s1 = s[n++];
	}
	return (sum);
}
