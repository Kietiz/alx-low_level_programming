#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return:return -15 if less, 0 if equal and 15 if greater
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
		if (s1[i] > s2[i])
		{
			return (15);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		else
			return (0);
}
