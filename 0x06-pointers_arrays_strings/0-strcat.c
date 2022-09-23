#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: paste destination
 * @src: copy source
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;
	int k;

	for (i = 0 ; src[i] != '\0' ; i++)
		for (n = 0 ; dest[n] != '\0' ; n++)
			dest[k] = dest[i + n];
	return (dest[k]);
}
