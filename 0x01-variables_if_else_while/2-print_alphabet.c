#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * Description: uses the for loop and putchar
 * Return: return 0 when successful
 */

int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z' ; x++)
		putchar(x);
	return (0);
}
