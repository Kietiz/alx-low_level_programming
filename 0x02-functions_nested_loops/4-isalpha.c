#include "main.h"

/**
 * _isalpha - returns caps and small letters
 * @c: program input
 * Return: retun 1 if c  is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
