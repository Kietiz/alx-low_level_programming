#include "main.h"

/**
 * _abs - gives the absolute value of a figure
 * @n: program input
 * Return: always 0
 */

int _abs(int n)
{
	int abs;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
