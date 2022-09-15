#include "main.h"

/**
 *_islower - checks for lower characters
 * Description; using headers
 * Return:Returns 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && <= 'z')
		return (1);
	else
		return (0);
}
