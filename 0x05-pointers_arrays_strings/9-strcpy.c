#include "main.h"

/**
 * char *_strcpy - copies a pointed string
 * @src: copy souce
 * @dest: paste destination
 * Return: copied value
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	for (; src[a] != '\0' ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
