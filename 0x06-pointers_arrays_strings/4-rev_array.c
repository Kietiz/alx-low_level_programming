#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the string to be reversed;
 * @n: number of elements in the string
 * Return: reversed string
 */

void reverse_array(int *a, int n)
{
	int i;
	char rev;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		rev = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = rev;
	}
}
