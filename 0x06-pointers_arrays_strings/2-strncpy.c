#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
		j++;
	for (i = 0 ; dest[i++] && i < n ; i++)
		dest[i] = src[i];
	for (i = j ; i < n ; i++)
		dest[index] = '\0';
	return (dest);
}
