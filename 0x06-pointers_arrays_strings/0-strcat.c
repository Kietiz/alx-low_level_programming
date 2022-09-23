#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: paste destination
 * @src: copy source
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i++])
		n++;
	for (i = 0 ; src[i] ; i++)
		dest[n] = src[i];
	return (dest);
}
