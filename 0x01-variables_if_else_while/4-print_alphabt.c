#include <stdio.h>

/**
 * main - prints all letters except e and q
 * Description: uses for and putchar fn
 * Return: return 0 when successful
 */

int main(void)
{
	int x;

	for (x = 'a' ; x != 'e' ; x <= 'z' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
