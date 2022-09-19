#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first integer
 * @*a: memory pointer of a
 * @b: second integer
 * @b*- memory pointer for b
 * Return: null
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
