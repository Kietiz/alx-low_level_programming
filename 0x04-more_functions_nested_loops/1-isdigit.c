#include "main.h"

/**
 * _isdigit - checks if input is a digit
 * @c: program input
 * Return: return 1 if true 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >=48) && (c <= 57))
		return (1);
	else
		return (0);
}
