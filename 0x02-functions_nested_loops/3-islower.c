#include "main.h"

/**
 *_islower - checks for lower characters
 * @c: is the input to the program
 * Return:Returns 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
