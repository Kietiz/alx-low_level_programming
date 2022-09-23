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

	for (i = 0 ; i < n ; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
